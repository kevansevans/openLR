package components.managers;

import hxlr.rider.RiderBase;
import hxlr.rider.ContactPoint;
import haxe.PosInfos;

/**
 * ...
 * @author Kaelan
 */
class Simulation 
{
	public var frameStates:Map<RiderBase, Array<RiderState>>;
	public var frames:Int = 0;
	
	public var playing:Bool = false;
	public var paused:Bool = false;
	public var rewinding:Bool = false;
	
	public var flagged:Bool = false;
	public var flagframe:Int = 0;
	
	@:isVar public var desiredSimSpeed(get, set):Float;
	public var fastForward:Int = 1;
	
	public function new() 
	{
		frameStates = new Map();
		
		desiredSimSpeed = 40;
		
		recordGlobalSimState();
		
		restoreState(0);
		
		//var x = (dot.x / 0.175) / 100; return new Point(x, 0);
	}
	
	var timeDelta:Float = 0.0;
	public function startSim() {
		
		if (Main.riders.riderCount == 0) {
			return;
		}
		
		playing = true;
		paused = false;
		timeDelta = 0;
		if (flagged) restoreState(flagframe);
		else restoreState(0);
		
		#if hl
		//Main.audio.stopMusic();
		//Main.audio.playMusic(frames);
		#end
		
		Main.camera.start();
	}
	
	public function pauseSim() {
		if (!playing && !paused) return;
		else {
			if (!paused) {
				playing = false;
				paused = true;
			} else {
				playing = true;
				paused = false;
			}
		}
	}
	public function resumeSim() {
		playing = true;
		paused = false;
		#if hl
		//Main.audio.playMusic(frames);
		#end
	}
	
	public var returnframe:Int = 0;
	public var updating:Bool = false;
	public function updateSim() {
		
		return;
		
		if (updating) return;
		
		updating = true;
		returnframe = frames;
		restoreState(0);
	}
	
	public function liveUpdateTick() {
		for (tic in 0...40) {
			if (frames == returnframe) {
				updating = false;
				break;
			}
			else stepSim();
		}
	}
	
	public function endSim() {
		
		if (playing) Main.camera.stop();
		
		playing = false;
		paused = false;
		timeDelta = 0;
		if (flagged) restoreState(flagframe);
		else restoreState(0);
		
		#if hl
		//Main.audio.stopMusic();
		#end
	}
	public function playSim(_delta:Float) {
		
		timeDelta += _delta;
		if (timeDelta >= desiredSimSpeed) {
			stepSim();
			timeDelta = 0;
		}
	}
	public function rewindSim(_delta:Float) {
		timeDelta += _delta;
		while (timeDelta >= desiredSimSpeed) {
			restoreState(frames -= 1);
			timeDelta -= desiredSimSpeed;
		}
	}
	
	public function stepSim() {
		++frames;
		Main.riders.stepRiders();
		recordGlobalSimState();
	}
	
	public function backSim() {
		restoreState(frames -= 1);
	}
	
	public function quickUpdate() {
		backSim();
		stepSim();
	}
	
	public function setFlagState() {
		
		flagged = (playing == true || paused == true) ? true : !flagged;
		
		if (flagged && (playing || paused)) {
			flagframe = frames;
		}
		
	}
	
	public function restoreState(_frame:Int) {
		var locframe = Std.int(Math.max(_frame, 0));
		frames = locframe;
		for (rider in Main.riders.riders) {
			var state = frameStates[rider][locframe];
			if (state == null) {
				recordRiderState(rider, frames);
				continue;
			}
			rider.crashed = state.crashed;
			for (point in 0...rider.contactPoints.length) {
				rider.contactPoints[point].deserialize(state.points[point]);
			}
			for (point in 0...rider.airPoints.length) {
				rider.airPoints[point].deserialize(state.scarves[point]);
			}
		}
	}
	
	public function recordGlobalSimState() {
		for (rider in Main.riders.riders) {
			recordRiderState(rider, frames);
		}
	}
	
	public function recordRiderState(_rider:RiderBase, _frame:Int) {
		if (frameStates[_rider] == null) frameStates[_rider] = new Array();
		var stat:RiderState = {
			crashed : _rider.crashed,
			points : new Array(),
			scarves : new Array()
		}
		frameStates[_rider][_frame] = stat;
		var _points:Array<PointContainer> = new Array();
		var _scarves:Array<PointContainer> = new Array();
		for (point in _rider.contactPoints) {
			_points.push(point.serialize());
		}
		for (point in _rider.airPoints) {
			_scarves.push(point.serialize());
		}
		frameStates[_rider][_frame].points = _points;
		frameStates[_rider][_frame].scarves = _scarves;
	}
	
	var localRiderFrame:Int = 0;
	public function catchRiderUp(_rider:RiderBase) 
	{
		localRiderFrame = 0;
	}
	
	function get_desiredSimSpeed():Float 
	{
		return desiredSimSpeed;
	}
	
	function set_desiredSimSpeed(value:Float):Float 
	{
		return desiredSimSpeed = 1 / value;
	}
	
}

typedef RiderState = {
	var crashed:Bool;
	var points:Array<PointContainer>;
	var scarves:Array<PointContainer>;
}