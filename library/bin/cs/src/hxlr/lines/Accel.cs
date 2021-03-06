// Generated by Haxe 4.1.5

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hxlr.lines {
	public class Accel : global::hxlr.lines.LineObject {
		
		public Accel(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public Accel(global::hxlr.math.geom.Point _start, global::hxlr.math.geom.Point _end, bool _shift) : base(global::haxe.lang.EmptyObject.EMPTY) {
			global::hxlr.lines.Accel.__hx_ctor_hxlr_lines_Accel(this, _start, _end, _shift);
		}
		
		
		protected static void __hx_ctor_hxlr_lines_Accel(global::hxlr.lines.Accel __hx_this, global::hxlr.math.geom.Point _start, global::hxlr.math.geom.Point _end, bool _shift) {
			unchecked {
				__hx_this.accConst = 0.1;
				global::hxlr.lines.LineObject.__hx_ctor_hxlr_lines_LineObject(__hx_this, _start, _end, _shift, default(global::haxe.lang.Null<int>));
				{
					__hx_this.type = 1;
					__hx_this.tangible = true;
				}
				
			}
		}
		
		
		public double accConst;
		
		public double accx;
		
		public double accy;
		
		public override void calculateConstants() {
			unchecked {
				base.calculateConstants();
				this.accx = ( ( this.ny * this.accConst ) * (( (this.shifted) ? (1) : (-1) )) );
				this.accy = ( ( this.nx * this.accConst ) * (( (this.shifted) ? (-1) : (1) )) );
			}
		}
		
		
		public override void collide(global::hxlr.rider.ContactPoint _point) {
			unchecked {
				double _loc5 = ( _point.pos.x - this.start.x );
				double _loc6 = ( _point.pos.y - this.start.y );
				double _loc4 = ( ( this.nx * _loc5 ) + ( this.ny * _loc6 ) );
				double _loc7 = ( (( ( _loc5 * this.dx ) + ( _loc6 * this.dy ) )) * this.invSqrDistance );
				if (( ( ( _point.dir.x * this.nx ) + ( _point.dir.y * this.ny ) ) > 0 )) {
					if (( ( ( ( _loc4 > 0 ) && ( _loc4 < this.zone ) ) && ( _loc7 >= this.limStart ) ) && ( _loc7 <= this.limEnd ) )) {
						_point.pos.x -= ( _loc4 * this.nx );
						_point.pos.y -= ( _loc4 * this.ny );
						_point.vel.x = ( ( _point.vel.x + ( ( ( this.ny * _point.friction ) * _loc4 ) * (( (( _point.vel.x < _point.pos.x )) ? (1) : (-1) )) ) ) + this.accx );
						_point.vel.y = ( ( _point.vel.y - ( ( ( this.nx * _point.friction ) * _loc4 ) * (( (( _point.vel.y < _point.pos.y )) ? (-1) : (1) )) ) ) + this.accy );
					}
					
				}
				
			}
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1080633368:
					{
						this.accy = ((double) (@value) );
						return @value;
					}
					
					
					case 1080633367:
					{
						this.accx = ((double) (@value) );
						return @value;
					}
					
					
					case 868895842:
					{
						this.accConst = ((double) (@value) );
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
					case 1080633368:
					{
						this.accy = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						return @value;
					}
					
					
					case 1080633367:
					{
						this.accx = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
						return @value;
					}
					
					
					case 868895842:
					{
						this.accConst = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
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
					case 1835249534:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "collide", 1835249534)) );
					}
					
					
					case 1493492809:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "calculateConstants", 1493492809)) );
					}
					
					
					case 1080633368:
					{
						return this.accy;
					}
					
					
					case 1080633367:
					{
						return this.accx;
					}
					
					
					case 868895842:
					{
						return this.accConst;
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
					case 1080633368:
					{
						return this.accy;
					}
					
					
					case 1080633367:
					{
						return this.accx;
					}
					
					
					case 868895842:
					{
						return this.accConst;
					}
					
					
					default:
					{
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("accy");
			baseArr.push("accx");
			baseArr.push("accConst");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}


