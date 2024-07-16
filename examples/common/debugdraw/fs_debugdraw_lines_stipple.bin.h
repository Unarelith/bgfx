static const uint8_t fs_debugdraw_lines_stipple_glsl[221] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, 0x00, // FSH...Z.........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ..varying vec4 v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // _color0;.varying
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, //  float v_stipple
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // .  float tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 1;.  tmpvar_1 = 
	0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x76, 0x5f, 0x73, 0x74, // (float(mod (v_st
	0x69, 0x70, 0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, 0x29, 0x29, 0x3b, 0x0a, // ipple, 0.25)));.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x3c, 0x20, 0x74, //   if ((0.125 < t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // mpvar_1)) {.    
	0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, // discard;.  };.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, // gl_FragColor = v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // _color0;.}...
};
static const uint8_t fs_debugdraw_lines_stipple_essl[239] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x00, // FSH...Z.........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, // vec4 v_color0;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, // arying highp flo
	0x61, 0x74, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x76, 0x6f, // at v_stipple;.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, // id main ().{.  h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ighp float tmpva
	0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, // r_1;.  tmpvar_1 
	0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x28, 0x6d, 0x6f, 0x64, 0x20, 0x28, 0x76, 0x5f, // = (float(mod (v_
	0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x2c, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x29, 0x29, 0x29, // stipple, 0.25)))
	0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x3c, // ;.  if ((0.125 <
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, //  tmpvar_1)) {.  
	0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, //   discard;.  };.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, //   gl_FragColor =
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  v_color0;.}...
};
static const uint8_t fs_debugdraw_lines_stipple_spv[702] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x02, // FSH...Z.........
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x83, 0x00, // ....#...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x4e, 0x00, // in....=...A...N.
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3d, 0x00, // ..main........=.
	0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_color0......
	0x05, 0x00, 0x41, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x00, // ..A...v_stipple.
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // ......N...bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3d, 0x00, // ragData0..G...=.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x41, 0x00, // ..........G...A.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4e, 0x00, // ..........G...N.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, // ..!.............
	0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, // ...... .........
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, // ..........+.....
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, // ..,......>+.....
	0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x14, 0x00, 0x02, 0x00, 0x32, 0x00, // ..-......>....2.
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. ...9.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...9...=.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, // .. ...@.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...@...A.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. ...M.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...M...N.....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, // ..+.............
	0x80, 0x40, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // .@6.............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......>...=...=.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x85, 0x00, // ......B...A.....
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x82, 0x00, // ......}...B.....
	0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x01, 0x00, // ..........~.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x06, 0x00, // ......}.........
	0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x83, 0x00, // ......-...~.....
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x7f, 0x00, // ..........B.....
	0x00, 0x00, 0xb8, 0x00, 0x05, 0x00, 0x32, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x2c, 0x00, // ......2...n...,.
	0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x03, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........p.....
	0x00, 0x00, 0xfa, 0x00, 0x04, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x70, 0x00, // ......n...o...p.
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x6f, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, 0x00, 0xf8, 0x00, // ......o.........
	0x02, 0x00, 0x70, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x3e, 0x00, // ..p...>...N...>.
	0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,             // ......8.......
};
static const uint8_t fs_debugdraw_lines_stipple_wgsl[594] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, // FSH...Z.......<.
	0x00, 0x00, 0x64, 0x69, 0x61, 0x67, 0x6e, 0x6f, 0x73, 0x74, 0x69, 0x63, 0x28, 0x6f, 0x66, 0x66, // ..diagnostic(off
	0x2c, 0x20, 0x64, 0x65, 0x72, 0x69, 0x76, 0x61, 0x74, 0x69, 0x76, 0x65, 0x5f, 0x75, 0x6e, 0x69, // , derivative_uni
	0x66, 0x6f, 0x72, 0x6d, 0x69, 0x74, 0x79, 0x29, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, // formity);.var<pr
	0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, // ivate> v_color0_
	0x31, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, 0x76, 0x61, // 1: vec4<f32>;.va
	0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, // r<private> v_sti
	0x70, 0x70, 0x6c, 0x65, 0x5f, 0x31, 0x3a, 0x20, 0x66, 0x33, 0x32, 0x3b, 0x0a, 0x76, 0x61, 0x72, // pple_1: f32;.var
	0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // <private> bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x5f, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, // ragData0_: vec4<
	0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, 0x0a, 0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x31, // f32>;..fn main_1
	0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, 0x36, // () {.    let _e6
	0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x31, 0x3b, 0x0a, 0x20, //  = v_color0_1;. 
	0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, 0x37, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x73, //    let _e7 = v_s
	0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, // tipple_1;.    if
	0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x66, 0x20, 0x3c, 0x20, 0x28, 0x5f, 0x65, 0x37, 0x20, //  (0.125f < (_e7 
	0x2d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x35, 0x66, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x6f, 0x72, // - (0.25f * floor
	0x28, 0x28, 0x5f, 0x65, 0x37, 0x20, 0x2a, 0x20, 0x34, 0x66, 0x29, 0x29, 0x29, 0x29, 0x29, 0x20, // ((_e7 * 4f))))) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, // {.        discar
	0x64, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x62, 0x67, 0x66, // d;.    }.    bgf
	0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x5f, 0x20, 0x3d, 0x20, 0x5f, // x_FragData0_ = _
	0x65, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0a, // e6;.    return;.
	0x7d, 0x0a, 0x0a, 0x40, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x0a, 0x66, 0x6e, // }..@fragment .fn
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, //  main(@location(
	0x30, 0x29, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x3a, 0x20, 0x76, 0x65, // 0) v_color0_: ve
	0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x2c, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, // c4<f32>, @locati
	0x6f, 0x6e, 0x28, 0x31, 0x29, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x3a, // on(1) v_stipple:
	0x20, 0x66, 0x33, 0x32, 0x29, 0x20, 0x2d, 0x3e, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, //  f32) -> @locati
	0x6f, 0x6e, 0x28, 0x30, 0x29, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x20, // on(0) vec4<f32> 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x31, // {.    v_color0_1
	0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x3b, 0x0a, 0x20, 0x20, //  = v_color0_;.  
	0x20, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x5f, 0x31, 0x20, 0x3d, 0x20, //   v_stipple_1 = 
	0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6d, // v_stipple;.    m
	0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, // ain_1();.    let
	0x20, 0x5f, 0x65, 0x35, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, //  _e5 = bgfx_Frag
	0x44, 0x61, 0x74, 0x61, 0x30, 0x5f, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, // Data0_;.    retu
	0x72, 0x6e, 0x20, 0x5f, 0x65, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // rn _e5;.}.......
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t fs_debugdraw_lines_stipple_dx11[450] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x01, // FSH...Z.........
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x96, 0x76, 0x5f, 0x90, 0xfe, 0x0c, 0xf6, 0xa6, 0xf8, 0x87, // ..DXBC.v_.......
	0x87, 0x78, 0x69, 0xff, 0xc8, 0x0a, 0x01, 0x00, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00, 0x03, 0x00, // .xi.............
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, 0xd0, 0x00, 0x00, 0x00, 0x50, 0x00, // GET...SHEX....P.
	0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, // ..4...j...b.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 0x02, 0x00, // ......b.........
	0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, // ..e.... ......h.
	0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, // ......8.........
	0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, // ...........@....
	0x80, 0x40, 0x41, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, // .@A.............
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, // ......2.........
	0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, // ......A........@
	0x00, 0x00, 0x00, 0x00, 0x80, 0x3e, 0x0a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x31, 0x00, // .....>........1.
	0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, // ...........@....
	0x00, 0x3e, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x04, 0x03, 0x0a, 0x00, // .>..............
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, // ......6.... ....
	0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, // ..F.......>.....
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t fs_debugdraw_lines_stipple_mtl[532] =
{
	0x46, 0x53, 0x48, 0x0b, 0xe7, 0x1a, 0x5a, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, // FSH...Z.........
	0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, // ..#include <meta
	0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, // l_stdlib>.#inclu
	0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, // de <simd/simd.h>
	0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // e metal;..struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, // .{.    float4 bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, // fx_FragData0 [[c
	0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, // olor(0)]];.};..s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // truct xlatMtlMai
	0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // n_in.{.    float
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // 4 v_color0 [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn0)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x5f, 0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x20, // float v_stipple 
	0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [[user(locn1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, // .};..fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, // atMtlMain_out xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // atMtlMain(xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, // lMain_in in [[st
	0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // age_in]]).{.    
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, // xlatMtlMain_out 
	0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, // out = {};.    if
	0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x3c, 0x20, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, //  (0.125 < (in.v_
	0x73, 0x74, 0x69, 0x70, 0x70, 0x6c, 0x65, 0x20, 0x2d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x35, 0x20, // stipple - (0.25 
	0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x6f, 0x72, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x73, 0x74, 0x69, // * floor(in.v_sti
	0x70, 0x70, 0x6c, 0x65, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x29, 0x0a, 0x20, // pple * 4.0)))). 
	0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, //    {.        dis
	0x63, 0x61, 0x72, 0x64, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x28, 0x29, 0x3b, // card_fragment();
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, // .    }.    out.b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, // gfx_FragData0 = 
	0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, // in.v_color0;.   
	0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, //  return out;.}..
	0x00, 0x00, 0x00, 0x00,                                                                         // ....
};
extern const uint8_t* fs_debugdraw_lines_stipple_pssl;
extern const uint32_t fs_debugdraw_lines_stipple_pssl_size;
