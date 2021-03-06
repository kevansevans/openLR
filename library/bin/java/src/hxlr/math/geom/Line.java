// Generated by Haxe 4.1.5
package hxlr.math.geom;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Line extends haxe.lang.HxObject
{
	public Line(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Line(hxlr.math.geom.Point _start, hxlr.math.geom.Point _end)
	{
		//line 17 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		hxlr.math.geom.Line.__hx_ctor_hxlr_math_geom_Line(this, _start, _end);
	}
	
	
	protected static void __hx_ctor_hxlr_math_geom_Line(hxlr.math.geom.Line __hx_this, hxlr.math.geom.Point _start, hxlr.math.geom.Point _end)
	{
		//line 19 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		__hx_this.start = _start;
		//line 20 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		__hx_this.end = _end;
	}
	
	
	public hxlr.math.geom.Point start;
	
	public hxlr.math.geom.Point end;
	
	
	
	
	
	public boolean intersects(hxlr.math.geom.Line _line)
	{
		//line 25 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		return false;
	}
	
	
	public double get_length()
	{
		//line 30 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		return java.lang.Math.sqrt(( java.lang.Math.pow(( this.end.x - this.start.x ), ((double) (2) )) + java.lang.Math.pow(( this.end.y - this.start.y ), ((double) (2) )) ));
	}
	
	
	public double set_length(double value)
	{
		//line 36 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		this.end.x += ( value * java.lang.Math.cos(this.get_angle()) );
		//line 37 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		this.end.y += ( value * java.lang.Math.sin(this.get_angle()) );
		//line 38 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		return this.get_length();
	}
	
	
	public double get_angle()
	{
		//line 43 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		double dx = ( this.end.x - this.start.x );
		//line 44 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		double dy = ( this.end.y - this.start.y );
		//line 45 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		double theta = java.lang.Math.atan(( dy / dx ));
		//line 46 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		return theta;
	}
	
	
	public double set_angle(double value)
	{
		//line 51 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		return this.get_angle();
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		{
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (( field != null )) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				switch (field.hashCode())
				{
					case 92960979:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.set_angle(value);
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1106363674:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.set_length(value);
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		{
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (( field != null )) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				switch (field.hashCode())
				{
					case 92960979:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.set_angle(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 109757538:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("start")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.start = ((hxlr.math.geom.Point) (value) );
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1106363674:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.set_length(((double) (haxe.lang.Runtime.toDouble(value)) ));
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 100571:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("end")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							this.end = ((hxlr.math.geom.Point) (value) );
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return value;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		{
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (( field != null )) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				switch (field.hashCode())
				{
					case 915293878:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("set_angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_angle")) );
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 109757538:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("start")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.start;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 1129910954:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("get_angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_angle")) );
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 100571:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("end")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.end;
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1383847581:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("set_length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set_length")) );
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1106363674:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_length();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 974314479:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("get_length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_length")) );
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 92960979:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_angle();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1586413772:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("intersects")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "intersects")) );
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		{
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (( field != null )) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				switch (field.hashCode())
				{
					case 92960979:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_angle();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1106363674:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_length();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		{
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			boolean __temp_executeDef1 = true;
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (( field != null )) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				switch (field.hashCode())
				{
					case 915293878:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("set_angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.set_angle(((double) (haxe.lang.Runtime.toDouble(dynargs[0])) ));
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1586413772:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("intersects")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.intersects(((hxlr.math.geom.Line) (dynargs[0]) ));
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 1129910954:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("get_angle")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_angle();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case 974314479:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("get_length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.get_length();
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
					case -1383847581:
					{
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						if (field.equals("set_length")) 
						{
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							__temp_executeDef1 = false;
							//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
							return this.set_length(((double) (haxe.lang.Runtime.toDouble(dynargs[0])) ));
						}
						
						//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
			if (__temp_executeDef1) 
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		baseArr.push("angle");
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		baseArr.push("length");
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		baseArr.push("end");
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		baseArr.push("start");
		//line 9 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Line.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


