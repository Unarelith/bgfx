static const uint8_t vs_debugdraw_fill_glsl[304] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0x00, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, // ....u_model. ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, // .........in uvec
	0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x3b, 0x0a, 0x69, 0x6e, 0x20, // 4 a_indices;.in 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, // vec3 a_position;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // viewProj;.unifor
	0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, // m mat4 u_model[3
	0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, // 2];.void main ()
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .{.  vec4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, // _1;.  tmpvar_1.w
	0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  = 1.0;.  tmpvar
	0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // _1.xyz = a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // ion;.  gl_Positi
	0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // on = (u_viewProj
	0x20, 0x2a, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, //  * (u_model[int(
	0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, 0x20, // a_indices.x)] * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // tmpvar_1));.}...
};
static const uint8_t vs_debugdraw_fill_essl[372] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0x00, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, // ....u_model. ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, // .....:...precisi
	0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, // on highp int;.pr
	0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, // ecision highp fl
	0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x75, 0x76, // oat;.in highp uv
	0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x3b, 0x0a, 0x69, // ec4 a_indices;.i
	0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, // n highp vec3 a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // osition;.uniform
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, //  highp mat4 u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ewProj;.uniform 
	0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, // mat4 u_model[32]
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // .  highp vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // _1.w = 1.0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, // pvar_1.xyz = a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, // osition;.  gl_Po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // sition = (u_view
	0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // Proj * (u_model[
	0x69, 0x6e, 0x74, 0x28, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, // int(a_indices.x)
	0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, // ] * tmpvar_1));.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t vs_debugdraw_fill_spv[1257] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // _model. @.......
	0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, // .u_viewProj.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, // ...........#....
	0x00, 0x0b, 0x00, 0x08, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, // .....f..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, // .............GLS
	0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, // L.std.450.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, // .....main....9..
	0x00, 0x3d, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, // .=...@..........
	0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x55, 0x6e, 0x69, // n............Uni
	0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, // formBlock.......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // .........u_viewP
	0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // roj.............
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x05, 0x00, 0x03, 0x00, 0x20, 0x00, 0x00, // .u_model..... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x39, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x69, // .........9...a_i
	0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x3d, 0x00, 0x00, // ndices.......=..
	0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, // .a_position.....
	0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, // .@...@entryPoint
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // Output.gl_Positi
	0x6f, 0x6e, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // on...G..........
	0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .@...H..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, // .#.......H......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .........#...@..
	0x00, 0x48, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....G..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G... ..."......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G... ...!......
	0x00, 0x47, 0x00, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...9..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .G...=..........
	0x00, 0x47, 0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .G...@..........
	0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, // .........!......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x17, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x17, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, // .+..............
	0x3f, 0x18, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ?...............
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .+........... ..
	0x00, 0x1c, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, // ................
	0x00, 0x1e, 0x00, 0x04, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // ................
	0x00, 0x20, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, // . ..............
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .;....... ......
	0x00, 0x15, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....!... ......
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .+...!..."......
	0x00, 0x20, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, // . ...(..........
	0x00, 0x2b, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .+...!..........
	0x00, 0x20, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // . ...8..........
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .;...8...9......
	0x00, 0x20, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, // . ...<..........
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .;...<...=......
	0x00, 0x20, 0x00, 0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, // . ...?..........
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .;...?...@......
	0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .6..............
	0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .............=..
	0x00, 0x07, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, // .....:...9...=..
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, // .....>...=...Q..
	0x00, 0x09, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....X...>......
	0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, // .Q.......Y...>..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, // .....Q.......Z..
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, // .>.......P......
	0x00, 0x5b, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, // .[...X...Y...Z..
	0x00, 0x16, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, // .....Q.......]..
	0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, // .:.......|...!..
	0x00, 0x5e, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x28, 0x00, 0x00, // .^...]...A...(..
	0x00, 0x5f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, // ._... ..."...^..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // .=.......`..._..
	0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, // .........a...[..
	0x00, 0x60, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x28, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, // .`...A...(...c..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, // . .......=......
	0x00, 0x64, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, // .d...c..........
	0x00, 0x65, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, // .e...a...d...>..
	0x00, 0x40, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, // .@...e.......8..
	0x00, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x40, 0x08,                                           // .......@.
};
static const uint8_t vs_debugdraw_fill_wgsl[1656] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _viewRect.......
	0x00, 0x00, 0x00, 0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x02, // ....u_viewTexel.
	0x01, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // ..........u_view
	0x04, 0x01, 0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x75, 0x5f, 0x69, 0x6e, 0x76, // .. ........u_inv
	0x56, 0x69, 0x65, 0x77, 0x04, 0x01, 0x60, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x75, // View..`........u
	0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0xa0, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, // _proj...........
	0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0xe0, 0x00, 0x04, 0x00, 0x00, // u_invProj.......
	0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // ....u_viewProj..
	0x20, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, //  ........u_invVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x60, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ewProj..`.......
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0xa0, 0x01, 0x80, 0x00, 0x00, 0x00, // .u_model. ......
	0x00, 0x00, 0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01, // ...u_modelView..
	0xa0, 0x09, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // .........u_model
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0xe0, 0x09, 0x04, 0x00, 0x00, 0x00, // ViewProj........
	0x00, 0x00, 0x0b, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x02, 0x01, // ...u_alphaRef4..
	0x20, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x64, 0x69, 0x61, 0x67, //  .......d...diag
	0x6e, 0x6f, 0x73, 0x74, 0x69, 0x63, 0x28, 0x6f, 0x66, 0x66, 0x2c, 0x20, 0x64, 0x65, 0x72, 0x69, // nostic(off, deri
	0x76, 0x61, 0x74, 0x69, 0x76, 0x65, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x69, 0x74, // vative_uniformit
	0x79, 0x29, 0x3b, 0x0a, 0x0a, 0x61, 0x6c, 0x69, 0x61, 0x73, 0x20, 0x41, 0x72, 0x72, 0x20, 0x3d, // y);..alias Arr =
	0x20, 0x61, 0x72, 0x72, 0x61, 0x79, 0x3c, 0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x20, //  array<mat4x4f, 
	0x33, 0x32, 0x75, 0x3e, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x55, 0x6e, // 32u>;..struct Un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x2f, // iformBlock {.  /
	0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x30, 0x29, 0x20, 0x2a, 0x2f, 0x0a, // * @offset(0) */.
	0x20, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x20, 0x3a, 0x20, 0x76, //   u_viewRect : v
	0x65, 0x63, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, // ec4f,.  /* @offs
	0x65, 0x74, 0x28, 0x31, 0x36, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x76, 0x69, // et(16) */.  u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x2c, // ewTexel : vec4f,
	0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x33, 0x32, // .  /* @offset(32
	0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, 0x3a, 0x20, // ) */.  u_view : 
	0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, // mat4x4f,.  /* @o
	0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x39, 0x36, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, // ffset(96) */.  u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x20, 0x3a, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x78, // _invView : mat4x
	0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, // 4f,.  /* @offset
	0x28, 0x31, 0x36, 0x30, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x70, 0x72, 0x6f, // (160) */.  u_pro
	0x6a, 0x20, 0x3a, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, // j : mat4x4f,.  /
	0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x32, 0x32, 0x34, 0x29, 0x20, 0x2a, // * @offset(224) *
	0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x3a, 0x20, // /.  u_invProj : 
	0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, // mat4x4f,.  /* @o
	0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x32, 0x38, 0x38, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, // ffset(288) */.  
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x3a, 0x20, 0x6d, 0x61, 0x74, // u_viewProj : mat
	0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, // 4x4f,.  /* @offs
	0x65, 0x74, 0x28, 0x33, 0x35, 0x32, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x69, // et(352) */.  u_i
	0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x3a, 0x20, 0x6d, 0x61, 0x74, // nvViewProj : mat
	0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, // 4x4f,.  /* @offs
	0x65, 0x74, 0x28, 0x34, 0x31, 0x36, 0x29, 0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x6d, // et(416) */.  u_m
	0x6f, 0x64, 0x65, 0x6c, 0x20, 0x3a, 0x20, 0x41, 0x72, 0x72, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, // odel : Arr,.  /*
	0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x32, 0x34, 0x36, 0x34, 0x29, 0x20, 0x2a, //  @offset(2464) *
	0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, // /.  u_modelView 
	0x3a, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, 0x2f, 0x2a, 0x20, // : mat4x4f,.  /* 
	0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x32, 0x35, 0x32, 0x38, 0x29, 0x20, 0x2a, 0x2f, // @offset(2528) */
	0x0a, 0x20, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // .  u_modelViewPr
	0x6f, 0x6a, 0x20, 0x3a, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x78, 0x34, 0x66, 0x2c, 0x0a, 0x20, 0x20, // oj : mat4x4f,.  
	0x2f, 0x2a, 0x20, 0x40, 0x6f, 0x66, 0x66, 0x73, 0x65, 0x74, 0x28, 0x32, 0x35, 0x39, 0x32, 0x29, // /* @offset(2592)
	0x20, 0x2a, 0x2f, 0x0a, 0x20, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, //  */.  u_alphaRef
	0x34, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x2c, 0x0a, 0x7d, 0x0a, 0x0a, 0x40, 0x67, // 4 : vec4f,.}..@g
	0x72, 0x6f, 0x75, 0x70, 0x28, 0x30, 0x29, 0x20, 0x40, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, // roup(0) @binding
	0x28, 0x30, 0x29, 0x20, 0x76, 0x61, 0x72, 0x3c, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x3e, // (0) var<uniform>
	0x20, 0x78, 0x5f, 0x39, 0x20, 0x3a, 0x20, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, //  x_9 : UniformBl
	0x6f, 0x63, 0x6b, 0x3b, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, // ock;..var<privat
	0x65, 0x3e, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x20, 0x3a, 0x20, 0x76, // e> a_indices : v
	0x65, 0x63, 0x34, 0x75, 0x3b, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, // ec4u;..var<priva
	0x74, 0x65, 0x3e, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3a, // te> a_position :
	0x20, 0x76, 0x65, 0x63, 0x33, 0x66, 0x3b, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, //  vec3f;..var<pri
	0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x78, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // vate> x_entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // ntOutput_gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x3b, 0x0a, 0x0a, 0x66, // tion : vec4f;..f
	0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x78, // n main_1() {.  x
	0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, // _entryPointOutpu
	0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, // t_gl_Position = 
	0x28, 0x28, 0x76, 0x65, 0x63, 0x34, 0x66, 0x28, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ((vec4f(a_positi
	0x6f, 0x6e, 0x2e, 0x78, 0x2c, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // on.x, a_position
	0x2e, 0x79, 0x2c, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, // .y, a_position.z
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x66, 0x29, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x39, 0x2e, 0x75, 0x5f, // , 1.0f) * x_9.u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x62, 0x69, 0x74, 0x63, 0x61, 0x73, 0x74, 0x3c, 0x69, 0x33, // model[bitcast<i3
	0x32, 0x3e, 0x28, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, // 2>(a_indices.x)]
	0x29, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x39, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // ) * x_9.u_viewPr
	0x6f, 0x6a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0a, 0x7d, // oj);.  return;.}
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, // ..struct main_ou
	0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x40, 0x62, 0x75, 0x69, 0x6c, 0x74, 0x69, 0x6e, 0x28, 0x70, // t {.  @builtin(p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x0a, 0x20, 0x20, 0x78, 0x5f, 0x65, 0x6e, 0x74, // osition).  x_ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, // ryPointOutput_gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x20, 0x3a, 0x20, 0x76, 0x65, // _Position_1 : ve
	0x63, 0x34, 0x66, 0x2c, 0x0a, 0x7d, 0x0a, 0x0a, 0x40, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x0a, // c4f,.}..@vertex.
	0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, // fn main(@locatio
	0x6e, 0x28, 0x30, 0x29, 0x20, 0x40, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x70, 0x6f, 0x6c, 0x61, 0x74, // n(0) @interpolat
	0x65, 0x28, 0x66, 0x6c, 0x61, 0x74, 0x29, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, // e(flat) a_indice
	0x73, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x75, 0x2c, // s_param : vec4u,
	0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x31, 0x29, 0x20, 0x61, 0x5f, //  @location(1) a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, 0x3a, // position_param :
	0x20, 0x76, 0x65, 0x63, 0x33, 0x66, 0x29, 0x20, 0x2d, 0x3e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, //  vec3f) -> main_
	0x6f, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, // out {.  a_indice
	0x73, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x5f, 0x70, 0x61, // s = a_indices_pa
	0x72, 0x61, 0x6d, 0x3b, 0x0a, 0x20, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // ram;.  a_positio
	0x6e, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x70, // n = a_position_p
	0x61, 0x72, 0x61, 0x6d, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, // aram;.  main_1()
	0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, // ;.  return main_
	0x6f, 0x75, 0x74, 0x28, 0x78, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, // out(x_entryPoint
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // Output_gl_Positi
	0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // on);.}..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x30, 0x0a,                                                 // ......0.
};
static const uint8_t vs_debugdraw_fill_dx11[693] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // VSH............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // _viewProj.......
	0x00, 0x00, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, // ....u_model. @..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xc1, 0x2c, 0x41, // .....t...DXBC.,A
	0x2c, 0xba, 0x34, 0xb2, 0xf0, 0x52, 0xc5, 0x22, 0x4a, 0x37, 0xde, 0xd6, 0xa0, 0x01, 0x00, 0x00, // ,.4..R."J7......
	0x00, 0x74, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, // .t.......,......
	0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....ISGNP......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....8..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x45, 0x00, 0x00, // .............E..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x07, 0x07, 0x00, 0x00, 0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, 0x4e, 0x44, 0x49, 0x43, 0x45, // .....BLENDINDICE
	0x53, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, // S.POSITION...OSG
	0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // N,........... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, // .....SV_POSITION
	0x00, 0x53, 0x48, 0x45, 0x58, 0xb4, 0x01, 0x00, 0x00, 0x50, 0x00, 0x01, 0x00, 0x6d, 0x00, 0x00, // .SHEX....P...m..
	0x00, 0x6a, 0x08, 0x00, 0x01, 0x59, 0x08, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .j...Y...F. ....
	0x00, 0x84, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // ....._..........
	0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, // ._...r.......g..
	0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .. ..........h..
	0x02, 0x02, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....)..........
	0x00, 0x0a, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, // ..........@.....
	0x00, 0x38, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, // .8...........V..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // .....F. ........
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, // .........2......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .....F. ........
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, // .F.......2......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // .....F. ........
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .F..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .....F.......F. 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, // .8...........V..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....F. ........
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2...........F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // .F.......2......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....F. ........
	0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, // .2.... ......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, // .F.......>......
	0x00, 0x01, 0x00, 0x40, 0x08,                                                                   // ...@.
};
static const uint8_t vs_debugdraw_fill_mtl[697] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // _model. @.......
	0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, // .u_viewProj.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .....x...#includ
	0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, // e <metal_stdlib>
	0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, // .#include <simd/
	0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, // simd.h>..using n
	0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, // amespace metal;.
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, // .struct _Global.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, // {.    float4x4 u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // _viewProj;.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // loat4x4 u_model[
	0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // 32];.};..struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, // xlatMtlMain_out.
	0x7b, 0x0a, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x6d, 0x65, // {..float bgfx_me
	0x74, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x5b, 0x5b, // tal_pointSize [[
	0x70, 0x6f, 0x69, 0x6e, 0x74, 0x5f, 0x73, 0x69, 0x7a, 0x65, 0x5d, 0x5d, 0x20, 0x3d, 0x20, 0x31, // point_size]] = 1
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, // ;.    float4 gl_
	0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, // Position [[posit
	0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ion]];.};..struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, // t xlatMtlMain_in
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x69, // .{.    uint4 a_i
	0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // ndices [[attribu
	0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // te(0)]];.    flo
	0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, // at3 a_position [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, // .};..vertex xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // MtlMain_out xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // MtlMain(xlatMtlM
	0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, // ain_in in [[stag
	0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, // e_in]], constant
	0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, //  _Global& _mtl_u
	0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, //  [[buffer(0)]]).
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // {.    xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, // n_out out = {};.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, //     out.gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, // ion = _mtl_u.u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // iewProj * (_mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, 0x69, 0x6e, // u.u_model[int(in
	0x2e, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, 0x20, 0x2a, // .a_indices.x)] *
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, //  float4(in.a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ition, 1.0));.  
	0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, //   return out;.}.
	0x0a, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x40, 0x08,                                           // .......@.
};
extern const uint8_t* vs_debugdraw_fill_pssl;
extern const uint32_t vs_debugdraw_fill_pssl_size;
