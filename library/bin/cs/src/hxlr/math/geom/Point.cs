// Generated by Haxe 4.1.5

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hxlr.math.geom {
	public class Point : global::haxe.lang.HxObject {
		
		public Point(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Point(global::haxe.lang.Null<double> _x, global::haxe.lang.Null<double> _y) {
			global::hxlr.math.geom.Point.__hx_ctor_hxlr_math_geom_Point(this, _x, _y);
		}
		
		
		protected static void __hx_ctor_hxlr_math_geom_Point(global::hxlr.math.geom.Point __hx_this, global::haxe.lang.Null<double> _x, global::haxe.lang.Null<double> _y) {
			double _y1 = ( ( ! (_y.hasValue) ) ? (0.0) : ((_y).@value) );
			double _x1 = ( ( ! (_x.hasValue) ) ? (0.0) : ((_x).@value) );
			__hx_this.x = _x1;
			__hx_this.y = _y1;
		}
		
		
		public double x;
		
		public double y;
		
		public virtual global::hxlr.math.geom.Point clone() {
			return new global::hxlr.math.geom.Point(new global::haxe.lang.Null<double>(this.x, true), new global::haxe.lang.Null<double>(this.y, true));
		}
		
		
		public virtual global::hxlr.math.geom.Point @add(global::hxlr.math.geom.Point _point) {
			this.x += _point.x;
			this.y += _point.y;
			return this;
		}
		
		
		public virtual global::hxlr.math.geom.Point sub(global::hxlr.math.geom.Point _point) {
			this.x -= _point.x;
			this.y -= _point.y;
			return this;
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 121:
					{
						this.y = ((double) (@value) );
						return @value;
					}
					
					
					case 120:
					{
						this.x = ((double) (@value) );
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 121:
					{
						this.y = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						return @value;
					}
					
					
					case 120:
					{
						this.x = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 5745024:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "sub", 5745024)) );
					}
					
					
					case 4846113:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "add", 4846113)) );
					}
					
					
					case 1214452573:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "clone", 1214452573)) );
					}
					
					
					case 121:
					{
						return this.y;
					}
					
					
					case 120:
					{
						return this.x;
					}
					
					
					default:
					{
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 121:
					{
						return this.y;
					}
					
					
					case 120:
					{
						return this.x;
					}
					
					
					default:
					{
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_invokeField(string field, int hash, object[] dynargs) {
			unchecked {
				switch (hash) {
					case 5745024:
					{
						return this.sub(((global::hxlr.math.geom.Point) (dynargs[0]) ));
					}
					
					
					case 4846113:
					{
						return this.@add(((global::hxlr.math.geom.Point) (dynargs[0]) ));
					}
					
					
					case 1214452573:
					{
						return this.clone();
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("y");
			baseArr.push("x");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}


