// Generated by Haxe 4.1.5

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace hxlr.file {
	public class AMF0Reader : global::haxe.lang.HxObject {
		
		public AMF0Reader(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public AMF0Reader(global::haxe.io.Bytes _sol) {
			global::hxlr.file.AMF0Reader.__hx_ctor_hxlr_file_AMF0Reader(this, _sol);
		}
		
		
		protected static void __hx_ctor_hxlr_file_AMF0Reader(global::hxlr.file.AMF0Reader __hx_this, global::haxe.io.Bytes _sol) {
			unchecked {
				__hx_this.@object = ((object) (new global::haxe.lang.DynamicObject(new int[]{}, new object[]{}, new int[]{}, new double[]{})) );
				__hx_this.pos = 0;
				{
					__hx_this.data = _sol;
					global::hxlr.file.AMF0Reader pos = __hx_this;
					__hx_this.header = ( ( ((int) (__hx_this.data.b[__hx_this.pos]) ) << 8 ) | ((int) (__hx_this.data.b[pos.pos += 1]) ) );
					global::hxlr.file.AMF0Reader pos1 = __hx_this;
					global::hxlr.file.AMF0Reader pos2 = __hx_this;
					global::hxlr.file.AMF0Reader pos3 = __hx_this;
					global::hxlr.file.AMF0Reader pos4 = __hx_this;
					__hx_this.size = ( ( ( ( ((int) (__hx_this.data.b[pos1.pos += 1]) ) << 24 ) | ( ((int) (__hx_this.data.b[pos2.pos += 1]) ) << 16 ) ) | ( ((int) (__hx_this.data.b[pos3.pos += 1]) ) << 8 ) ) | ((int) (__hx_this.data.b[pos4.pos += 1]) ) );
					if (( __hx_this.size > __hx_this.data.length )) {
						global::haxe.Log.trace.__hx_invoke2_o(default(double), "Internal size value greater than file size!", default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx"}, new int[]{1981972957}, new double[]{((double) (33) )}));
						return;
					}
					
					global::hxlr.file.AMF0Reader tcso = __hx_this;
					string tcso1 = __hx_this.data.getString(tcso.pos += 1, 4, null);
					if (( tcso1.ToUpperInvariant() != "TCSO" )) {
						global::haxe.Log.trace.__hx_invoke2_o(default(double), "Not a valid .sol/AMF0 file!", default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351, 1830310359}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx", new global::Array<object>(new object[]{tcso1})}, new int[]{1981972957}, new double[]{((double) (39) )}));
						return;
					}
					
					__hx_this.pos += 11;
					int saveNameSize = ((int) (__hx_this.data.b[__hx_this.pos]) );
					global::hxlr.file.AMF0Reader saveNameField = __hx_this;
					string saveNameField1 = __hx_this.data.getString(saveNameField.pos += 1, saveNameSize, null);
					if (( saveNameField1 != "savedLines" )) {
						global::haxe.Log.trace.__hx_invoke2_o(((double) (saveNameSize) ), global::haxe.lang.Runtime.undefined, default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351, 1830310359}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx", new global::Array<object>(new object[]{saveNameField1})}, new int[]{1981972957}, new double[]{((double) (47) )}));
						global::haxe.Log.trace.__hx_invoke2_o(default(double), "Unable to locate savedLines!", default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx"}, new int[]{1981972957}, new double[]{((double) (48) )}));
						return;
					}
					
					__hx_this.pos += ( saveNameSize + 4 );
					global::hxlr.file.AMF0Reader pos5 = __hx_this;
					int trackListNameSize = ( ( ((int) (__hx_this.data.b[__hx_this.pos]) ) << 8 ) | ((int) (__hx_this.data.b[pos5.pos += 1]) ) );
					global::hxlr.file.AMF0Reader trackListField = __hx_this;
					string trackListField1 = __hx_this.data.getString(trackListField.pos += 1, trackListNameSize, null);
					if (( trackListField1 != "trackList" )) {
						global::haxe.Log.trace.__hx_invoke2_o(((double) (trackListNameSize) ), global::haxe.lang.Runtime.undefined, default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351, 1830310359}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx", new global::Array<object>(new object[]{trackListField1})}, new int[]{1981972957}, new double[]{((double) (57) )}));
						global::haxe.Log.trace.__hx_invoke2_o(default(double), "Unable to locate trackList!", default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"new", "hxlr.file.AMF0Reader", "src/hxlr/file/AMF0Reader.hx"}, new int[]{1981972957}, new double[]{((double) (58) )}));
						return;
					}
					
					__hx_this.loadedSOL = new global::haxe.lang.DynamicObject(new int[]{859666569}, new object[]{new global::Array<object>(new object[]{})}, new int[]{}, new double[]{});
					global::hxlr.file.AMF0Reader pos6 = __hx_this;
					__hx_this.recursiveRead(((int) (__hx_this.data.b[pos6.pos += trackListNameSize]) ));
				}
				
			}
		}
		
		
		public global::haxe.io.Bytes data;
		
		public int pos;
		
		public int size;
		
		public int header;
		
		public object @object;
		
		public object loadedSOL;
		
		public virtual void recursiveRead(int _code) {
			unchecked {
				bool tmp = ( _code == 8 );
			}
		}
		
		
		public virtual object loadSOLTrack(int _index) {
			return new global::haxe.lang.DynamicObject(new int[]{}, new object[]{}, new int[]{}, new double[]{});
		}
		
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1910180171:
					{
						this.loadedSOL = ((object) (@value) );
						return @value;
					}
					
					
					case 356482751:
					{
						this.@object = ((object) (@value) );
						return @value;
					}
					
					
					case 2097154445:
					{
						this.header = ((int) (@value) );
						return @value;
					}
					
					
					case 1280549057:
					{
						this.size = ((int) (@value) );
						return @value;
					}
					
					
					case 5594516:
					{
						this.pos = ((int) (@value) );
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
					case 1910180171:
					{
						this.loadedSOL = ((object) (@value) );
						return @value;
					}
					
					
					case 356482751:
					{
						this.@object = ((object) (@value) );
						return @value;
					}
					
					
					case 2097154445:
					{
						this.header = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						return @value;
					}
					
					
					case 1280549057:
					{
						this.size = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						return @value;
					}
					
					
					case 5594516:
					{
						this.pos = ((int) (global::haxe.lang.Runtime.toInt(@value)) );
						return @value;
					}
					
					
					case 1113806378:
					{
						this.data = ((global::haxe.io.Bytes) (@value) );
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
					case 1285439585:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "loadSOLTrack", 1285439585)) );
					}
					
					
					case 1943520232:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "recursiveRead", 1943520232)) );
					}
					
					
					case 1910180171:
					{
						return this.loadedSOL;
					}
					
					
					case 356482751:
					{
						return this.@object;
					}
					
					
					case 2097154445:
					{
						return this.header;
					}
					
					
					case 1280549057:
					{
						return this.size;
					}
					
					
					case 5594516:
					{
						return this.pos;
					}
					
					
					case 1113806378:
					{
						return this.data;
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
					case 1910180171:
					{
						return ((double) (global::haxe.lang.Runtime.toDouble(this.loadedSOL)) );
					}
					
					
					case 356482751:
					{
						return ((double) (global::haxe.lang.Runtime.toDouble(this.@object)) );
					}
					
					
					case 2097154445:
					{
						return ((double) (this.header) );
					}
					
					
					case 1280549057:
					{
						return ((double) (this.size) );
					}
					
					
					case 5594516:
					{
						return ((double) (this.pos) );
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
					case 1285439585:
					{
						return this.loadSOLTrack(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
					}
					
					
					case 1943520232:
					{
						this.recursiveRead(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
						break;
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				return null;
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("loadedSOL");
			baseArr.push("object");
			baseArr.push("header");
			baseArr.push("size");
			baseArr.push("pos");
			baseArr.push("data");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}


