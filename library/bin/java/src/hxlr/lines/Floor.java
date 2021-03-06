// Generated by Haxe 4.1.5
package hxlr.lines;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Floor extends hxlr.lines.LineObject
{
	public Floor(haxe.lang.EmptyObject empty)
	{
		//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public Floor(hxlr.math.geom.Point _start, hxlr.math.geom.Point _end, boolean _shift)
	{
		//line 16 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 16 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		hxlr.lines.Floor.__hx_ctor_hxlr_lines_Floor(this, _start, _end, _shift);
	}
	
	
	protected static void __hx_ctor_hxlr_lines_Floor(hxlr.lines.Floor __hx_this, hxlr.math.geom.Point _start, hxlr.math.geom.Point _end, boolean _shift)
	{
		//line 16 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		hxlr.lines.LineObject.__hx_ctor_hxlr_lines_LineObject(__hx_this, _start, _end, _shift, null);
		//line 18 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		__hx_this.type = 0;
		//line 20 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		__hx_this.tangible = true;
	}
	
	
	@Override public void collide(hxlr.rider.ContactPoint _point)
	{
		//line 25 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		double _loc5 = ( _point.pos.x - this.start.x );
		//line 26 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		double _loc6 = ( _point.pos.y - this.start.y );
		//line 27 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		double _loc4 = ( ( this.nx * _loc5 ) + ( this.ny * _loc6 ) );
		//line 28 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		double _loc7 = ( (( ( _loc5 * this.dx ) + ( _loc6 * this.dy ) )) * this.invSqrDistance );
		//line 30 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		if (( ( ( _point.dir.x * this.nx ) + ( _point.dir.y * this.ny ) ) > 0 )) 
		{
			//line 32 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
			if (( ( ( ( _loc4 > 0 ) && ( _loc4 < this.zone ) ) && ( _loc7 >= this.limStart ) ) && ( _loc7 <= this.limEnd ) )) 
			{
				//line 33 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				_point.pos.x -= ( _loc4 * this.nx );
				//line 34 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				_point.pos.y -= ( _loc4 * this.ny );
				//line 35 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				_point.vel.x += ( ( ( this.ny * _point.friction ) * _loc4 ) * (( (( _point.vel.x < _point.pos.x )) ? (1) : (-1) )) );
				//line 36 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				_point.vel.y -= ( ( ( this.nx * _point.friction ) * _loc4 ) * (( (( _point.vel.y < _point.pos.y )) ? (-1) : (1) )) );
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
		{
			//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
			if (( field != null )) 
			{
				//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				switch (field.hashCode())
				{
					case 949448766:
					{
						//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
						if (field.equals("collide")) 
						{
							//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
							__temp_executeDef1 = false;
							//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "collide")) );
						}
						
						//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "F:\\OpenLR\\library\\src\\hxlr\\lines\\Floor.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


