// Generated by Haxe 4.1.5

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hxlr.lines {
	public class Scenery : global::hxlr.lines.LineObject {
		
		public Scenery(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public Scenery(global::hxlr.math.geom.Point _start, global::hxlr.math.geom.Point _end, bool _shift) : base(global::haxe.lang.EmptyObject.EMPTY) {
			global::hxlr.lines.Scenery.__hx_ctor_hxlr_lines_Scenery(this, _start, _end, _shift);
		}
		
		
		protected static void __hx_ctor_hxlr_lines_Scenery(global::hxlr.lines.Scenery __hx_this, global::hxlr.math.geom.Point _start, global::hxlr.math.geom.Point _end, bool _shift) {
			unchecked {
				global::hxlr.lines.LineObject.__hx_ctor_hxlr_lines_LineObject(__hx_this, _start, _end, _shift, default(global::haxe.lang.Null<int>));
				__hx_this.type = 2;
			}
		}
		
		
	}
}


