package components.physics;
import components.physics.Stick.StickType;
import components.sledder.RiderBase;

/**
 * ...
 * @author Kaelan
 */
class ScarfStick extends Stick 
{

	public function new(_a:RidePoint, _b:RidePoint, _rider:RiderBase) 
	{
		super(_a, _b, STANDARD, _rider);
		
		constrain = scarf;
	}
	
	public function scarf(?_crashed:Bool):Bool 
	{
		var xDist = a.pos.x - b.pos.x;
		var yDist = a.pos.y - b.pos.y;
		var dist = Math.sqrt(xDist * xDist + yDist * yDist);
		
		var adjust:Null<Float> = null;
		if (dist == 0) adjust = 0;
		else adjust = (dist - restLength) / dist * 0.5;
		
		var xAdjust = xDist * adjust;
		var yAdjust = yDist * adjust;
		
		b.pos.x = b.pos.x + xAdjust;
		b.pos.y = b.pos.y + yAdjust;
		
		return _crashed;
	}
	
}