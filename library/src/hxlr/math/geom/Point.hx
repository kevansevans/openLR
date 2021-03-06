package hxlr.math.geom;

/**
 * ...
 * @author Kaelan
 */

#if heaps
typedef Point = h2d.col.Point;
#elseif openfl
typedef Point = openfl.geom.Point;
#else
class Point
{
	public var x:Float;
	public var y:Float;
	
	public function new(_x:Float = 0.0, _y:Float = 0.0) {
		x = _x;
		y = _y;
	}
	
	public function clone():Point {
		return new Point(this.x, this.y);
	}
	
	public function add(_point:Point):Point {
		this.x += _point.x;
		this.y += _point.y;
		return this;
	}
	
	public function sub(_point:Point):Point {
		this.x -= _point.x;
		this.y -= _point.y;
		return this;
	}
}
#end