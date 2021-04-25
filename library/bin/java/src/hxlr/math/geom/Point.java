// Generated by Haxe 4.1.5
package hxlr.math.geom;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Point extends haxe.lang.HxObject
{
	public Point(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Point(java.lang.Object _x, java.lang.Object _y)
	{
		//line 18 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		hxlr.math.geom.Point.__hx_ctor_hxlr_math_geom_Point(this, _x, _y);
	}
	
	
	protected static void __hx_ctor_hxlr_math_geom_Point(hxlr.math.geom.Point __hx_this, java.lang.Object _x, java.lang.Object _y)
	{
		//line 18 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		double _y1 = ( (haxe.lang.Runtime.eq(_y, null)) ? (0.0) : (((double) (haxe.lang.Runtime.toDouble(_y)) )) );
		//line 18 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		double _x1 = ( (haxe.lang.Runtime.eq(_x, null)) ? (0.0) : (((double) (haxe.lang.Runtime.toDouble(_x)) )) );
		//line 19 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		__hx_this.x = _x1;
		//line 20 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		__hx_this.y = _y1;
	}
	
	
	public double x;
	
	public double y;
	
	public hxlr.math.geom.Point clone()
	{
		//line 24 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		return new hxlr.math.geom.Point(this.x, this.y);
	}
	
	
	public hxlr.math.geom.Point add(hxlr.math.geom.Point _point)
	{
		//line 28 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		this.x += _point.x;
		//line 29 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		this.y += _point.y;
		//line 30 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		return this;
	}
	
	
	public hxlr.math.geom.Point sub(hxlr.math.geom.Point _point)
	{
		//line 34 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		this.x -= _point.x;
		//line 35 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		this.y -= _point.y;
		//line 36 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		return this;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		{
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (( field != null )) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				switch (field.hashCode())
				{
					case 121:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("y")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							this.y = ((double) (value) );
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return value;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 120:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("x")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							this.x = ((double) (value) );
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return value;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		{
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (( field != null )) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				switch (field.hashCode())
				{
					case 121:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("y")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							this.y = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return value;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 120:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("x")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							this.x = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return value;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		{
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (( field != null )) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				switch (field.hashCode())
				{
					case 114240:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("sub")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "sub")) );
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 120:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("x")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.x;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 96417:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("add")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "add")) );
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 121:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("y")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.y;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 94756189:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("clone")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "clone")) );
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		{
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (( field != null )) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				switch (field.hashCode())
				{
					case 121:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("y")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.y;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 120:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("x")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.x;
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		{
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			boolean __temp_executeDef1 = true;
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (( field != null )) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				switch (field.hashCode())
				{
					case 114240:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("sub")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.sub(((hxlr.math.geom.Point) (dynargs[0]) ));
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 94756189:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("clone")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.clone();
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
					case 96417:
					{
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						if (field.equals("add")) 
						{
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							__temp_executeDef1 = false;
							//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
							return this.add(((hxlr.math.geom.Point) (dynargs[0]) ));
						}
						
						//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
			if (__temp_executeDef1) 
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		baseArr.push("y");
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		baseArr.push("x");
		//line 13 "F:\\OpenLR\\library\\src\\hxlr\\math\\geom\\Point.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}

