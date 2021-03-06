package hxlr.lines;

import hxlr.enums.LineType;
import hxlr.math.geom.Line;
import hxlr.math.geom.Point;
import hxlr.rider.ContactPoint;
import hxlr.file.TrackStruct.LineStruct;

/**
 * ...
 * @author Kaelan
 */
class LineObject extends Line
{
	public var id:Null<Int>;
	
	public var type:LineType;
	public var tangible:Bool = false;
	public var thickness:Float = 2;
	
	public var keyList:Array<String>;
	
	var gfxEnd:Point;
	
	public var shifted:Bool;
	
	public var dx:Float;
	public var dy:Float;
	public var C:Float;
	public var distance:Float;
	public var invSqrDistance:Float;
	public var invDistance:Float;
	public var nx:Float;
	public var ny:Float;
	public var zone = 10;
	@:isVar public var multiplier(get, set):Int = 1;
	
	public var limType:Int = 0;
	public var limStart:Float = 0;
	public var limEnd:Float = 0;
	public var limValue:Float = 0;
	
	public var prevLine:LineObject;
	public var nextLine:LineObject;
	
	public function new(_start:Point, _end:Point, _shift:Bool = false, ?_lim:Int = 0)
	{
		super(_start, _end);
		
		gfxEnd = new Point(end.x - start.x, end.y - start.y);
		
		shifted = _shift;
		
		keyList = new Array();
		
		calculateConstants();
		
		setLim(_lim);
		
	}
	
	function calculateConstants() {
		dx = end.x - start.x;
		dy = end.y - start.y;
		C = dy * start.x - dx * start.y;
		var _loc2 = Math.pow(dx, 2) + Math.pow(dy, 2);
		invSqrDistance = 1 / _loc2;
		distance = Math.sqrt(_loc2);
		invDistance = 1 / distance;
		nx = dy * invDistance * (shifted ? 1 : -1);
		ny = dx * invDistance * (shifted ? -1 : 1);
		limValue = Math.min(0.25, zone / distance);
	}
	
	public function setLim(_limMode:Int)
	{
		switch (_limMode) {
			case 0:
				limStart = 0;
				limEnd = 1;
			case 1:
				limStart = -limValue;
				limEnd = 1;
			case 2:
				limStart = 0;
				limEnd = 1 + limValue;
			case 3:
				limStart = -limValue;
				limEnd = 1 + limValue;
		}
		limType = _limMode;
	}
	
	public function collide(_point:ContactPoint) {
		
	}
	
	public function toLineStruct():LineStruct {
		var save:LineStruct = {
			id : id,
			type : type,
			x1 : start.x,
			y1 : start.y,
			x2 : end.x,
			y2 : end.y,
			multiplier : multiplier != 1 ? multiplier : null,
			flipped : shifted == true ? true : null,
			leftExtended : switch(limType){
				case 0 | 2:
					null;
				case 1 | 3:
					true;
				default :
					null;
			},
			rightExtended : switch(limType){
				case 0 | 1:
					null;
				case 2 | 3:
					true;
				default :
					null;
			},
		}
		return save;
	}
	
	function get_multiplier():Int 
	{
		return 1;
	}
	
	function set_multiplier(value:Int):Int 
	{
		return multiplier = value;
	}
}