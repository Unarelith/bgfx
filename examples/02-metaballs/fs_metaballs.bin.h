static const uint8_t fs_metaballs_glsl[376] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x01, // FSH..,.?......e.
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ..varying vec4 v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // _color0;.varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, //  vec3 v_normal;.
	0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // void main ().{. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, //  float tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, // .  tmpvar_1 = do
	0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, // t (normalize(v_n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, // ormal), vec3(0.0
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, // , 0.0, -1.0));. 
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, //  vec4 tmpvar_2;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, //   tmpvar_2.w = 1
	0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, // .0;.  tmpvar_2.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, // yz = pow (((.   
	0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, //  pow (v_color0.x
	0x79, 0x7a, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, // yz, vec3(2.2, 2.
	0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, // 2, 2.2)).   * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x20, 0x2b, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, // pvar_1) + pow (t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2c, 0x20, 0x33, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, // mpvar_1, 30.0)),
	0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, //  vec3(0.4545454,
	0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, //  0.4545454, 0.45
	0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // 45454));.  gl_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // agColor = tmpvar
	0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // _2;.}...
};
static const uint8_t fs_metaballs_essl[402] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x01, // FSH..,.?........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, // vec4 v_color0;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // 3 v_normal;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, //  main ().{.  hig
	0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // hp float tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 1;.  tmpvar_1 = 
	0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, // dot (normalize(v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, // _normal), vec3(0
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, // .0, 0.0, -1.0));
	0x0a, 0x20, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // .  mediump vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_2;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_2.w = 1.0;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, // tmpvar_2.xyz = p
	0x6f, 0x77, 0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // ow (((.    pow (
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x76, 0x65, // v_color0.xyz, ve
	0x63, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, // c3(2.2, 2.2, 2.2
	0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // )).   * tmpvar_1
	0x29, 0x20, 0x2b, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ) + pow (tmpvar_
	0x31, 0x2c, 0x20, 0x33, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, // 1, 30.0)), vec3(
	0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, // 0.4545454, 0.454
	0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, // 5454, 0.4545454)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, // );.  gl_FragColo
	0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, // r = tmpvar_2;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t fs_metaballs_spv[990] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x03, // FSH..,.?........
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x08, 0x00, 0xa2, 0x00, // ....#...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x5d, 0x00, // in....L...P...].
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x4c, 0x00, // ..main........L.
	0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_color0......
	0x05, 0x00, 0x50, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, // ..P...v_normal..
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // ......]...bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4c, 0x00, // ragData0..G...L.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x50, 0x00, // ..........G...P.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5d, 0x00, // ..........G...].
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, // ..!.............
	0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x08, 0x00, // ...... .........
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, // ................
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, // ..........+.....
	0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, // ..$.......+.....
	0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x2c, 0x00, 0x06, 0x00, 0x08, 0x00, // ..(.......,.....
	0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x28, 0x00, // ..)...$...$...(.
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, // ..+.......1.....
	0xf0, 0x41, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0xcd, 0xcc, // .A+.......5.....
	0x0c, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x2f, 0xba, // .@+.......>.../.
	0xe8, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, // .>+.......B.....
	0x80, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, // .? ...H.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...H...L.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // .. ...O.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...O...P.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;.......].....
	0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x35, 0x00, // ..,...........5.
	0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x08, 0x00, // ..5...5...,.....
	0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3e, 0x00, // ......>...>...>.
	0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......M...L...=.
	0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x0c, 0x00, // ......Q...P.....
	0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, // ..............E.
	0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x94, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x81, 0x00, // ..Q.............
	0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x06, 0x00, // ......).........
	0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x85, 0x00, // ..1...O.........
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ..M...M.........
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x87, 0x00, // ................
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0xa0, 0x00, // ................
	0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x87, 0x00, // ................
	0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x50, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x8b, 0x00, // ......P.........
	0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x8b, 0x00, // ................
	0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x8e, 0x00, // ..Q.............
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x91, 0x00, // ......Q.........
	0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, // ..........P.....
	0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x92, 0x00, // ..B...>...].....
	0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,             // ......8.......
};
static const uint8_t fs_metaballs_wgsl[766] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x02, // FSH..,.?........
	0x00, 0x00, 0x64, 0x69, 0x61, 0x67, 0x6e, 0x6f, 0x73, 0x74, 0x69, 0x63, 0x28, 0x6f, 0x66, 0x66, // ..diagnostic(off
	0x2c, 0x20, 0x64, 0x65, 0x72, 0x69, 0x76, 0x61, 0x74, 0x69, 0x76, 0x65, 0x5f, 0x75, 0x6e, 0x69, // , derivative_uni
	0x66, 0x6f, 0x72, 0x6d, 0x69, 0x74, 0x79, 0x29, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, // formity);.var<pr
	0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, // ivate> v_color0_
	0x31, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, 0x76, 0x61, // 1: vec4<f32>;.va
	0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // r<private> v_nor
	0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x33, 0x3c, 0x66, 0x33, 0x32, 0x3e, // mal_1: vec3<f32>
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x62, // ;.var<private> b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x5f, 0x3a, 0x20, // gfx_FragData0_: 
	0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, 0x0a, 0x66, 0x6e, 0x20, 0x6d, // vec4<f32>;..fn m
	0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, // ain_1() {.    le
	0x74, 0x20, 0x5f, 0x65, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // t _e12 = v_color
	0x30, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, 0x31, // 0_1;.    let _e1
	0x33, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x3b, 0x0a, // 3 = v_normal_1;.
	0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, 0x31, 0x35, 0x20, 0x3d, 0x20, 0x64, //     let _e15 = d
	0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x65, 0x31, // ot(normalize(_e1
	0x33, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x28, 0x30, 0x66, // 3), vec3<f32>(0f
	0x2c, 0x20, 0x30, 0x66, 0x2c, 0x20, 0x2d, 0x31, 0x66, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // , 0f, -1f));.   
	0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, 0x32, 0x32, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x28, //  let _e22 = pow(
	0x28, 0x28, 0x70, 0x6f, 0x77, 0x28, 0x5f, 0x65, 0x31, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, // ((pow(_e12.xyz, 
	0x76, 0x65, 0x63, 0x33, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x28, 0x32, 0x2e, 0x32, 0x66, 0x2c, 0x20, // vec3<f32>(2.2f, 
	0x32, 0x2e, 0x32, 0x66, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x66, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, // 2.2f, 2.2f)) * _
	0x65, 0x31, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x70, 0x6f, 0x77, 0x28, // e15) + vec3(pow(
	0x5f, 0x65, 0x31, 0x35, 0x2c, 0x20, 0x33, 0x30, 0x66, 0x29, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, // _e15, 30f))), ve
	0x63, 0x33, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, // c3<f32>(0.454545
	0x34, 0x37, 0x66, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x37, 0x66, // 47f, 0.45454547f
	0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x37, 0x66, 0x29, 0x29, 0x3b, // , 0.45454547f));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, // .    bgfx_FragDa
	0x74, 0x61, 0x30, 0x5f, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, // ta0_ = vec4<f32>
	0x28, 0x5f, 0x65, 0x32, 0x32, 0x2e, 0x78, 0x2c, 0x20, 0x5f, 0x65, 0x32, 0x32, 0x2e, 0x79, 0x2c, // (_e22.x, _e22.y,
	0x20, 0x5f, 0x65, 0x32, 0x32, 0x2e, 0x7a, 0x2c, 0x20, 0x31, 0x66, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  _e22.z, 1f);.  
	0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x40, 0x66, 0x72, //   return;.}..@fr
	0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x0a, 0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, // agment .fn main(
	0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x30, 0x29, 0x20, 0x76, 0x5f, 0x63, // @location(0) v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, // olor0_: vec4<f32
	0x3e, 0x2c, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x31, 0x29, 0x20, // >, @location(1) 
	0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x33, 0x3c, 0x66, // v_normal: vec3<f
	0x33, 0x32, 0x3e, 0x29, 0x20, 0x2d, 0x3e, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, // 32>) -> @locatio
	0x6e, 0x28, 0x30, 0x29, 0x20, 0x76, 0x65, 0x63, 0x34, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x20, 0x7b, // n(0) vec4<f32> {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x31, 0x20, // .    v_color0_1 
	0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x3b, 0x0a, 0x20, 0x20, 0x20, // = v_color0_;.   
	0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x76, 0x5f, //  v_normal_1 = v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x69, 0x6e, // normal;.    main
	0x5f, 0x31, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x5f, 0x65, // _1();.    let _e
	0x35, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // 5 = bgfx_FragDat
	0x61, 0x30, 0x5f, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, // a0_;.    return 
	0x5f, 0x65, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,             // _e5;.}........
};
static const uint8_t fs_metaballs_dx11[670] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x02, // FSH..,.?........
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xe0, 0x71, 0x1c, 0x84, 0x5e, 0xe7, 0xa2, 0x56, 0xe3, 0xe1, // ..DXBC.q..^..V..
	0x80, 0x2b, 0xcf, 0x34, 0xbf, 0x25, 0x01, 0x00, 0x00, 0x00, 0x88, 0x02, 0x00, 0x00, 0x03, 0x00, // .+.4.%..........
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, 0xac, 0x01, 0x00, 0x00, 0x50, 0x00, // GET...SHEX....P.
	0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, // ..k...j...b...r.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x02, 0x00, // ......b...r.....
	0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, // ..e.... ......h.
	0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, // ....../...r.....
	0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, // ..F.......8...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, // ......F........@
	0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, 0x00, 0x00, // .....@...@...@..
	0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ......r.......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, // ..F.......F.....
	0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, // ..D...........:.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, // ......8.........
	0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x10, 0x10, 0x00, 0x02, 0x00, // ..:.......*.....
	0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, // ../...........:.
	0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, // ..A.......8.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x40, // ...............@
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x19, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, // .....A..........
	0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, // ..........2...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, // ......F.........
	0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x01, 0x00, // ..A.............
	0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ../...r.......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, // ......8...r.....
	0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba, // ..F........@../.
	0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, // .>/..>/..>......
	0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, // ..r ......F.....
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, // ..6.... .......@
	0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,             // .....?>.......
};
static const uint8_t fs_metaballs_mtl[635] =
{
	0x46, 0x53, 0x48, 0x0b, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x02, // FSH..,.?......e.
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
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, // float3 v_normal 
	0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [[user(locn1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, // .};..fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, // atMtlMain_out xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // atMtlMain(xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, // lMain_in in [[st
	0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // age_in]]).{.    
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, // xlatMtlMain_out 
	0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // out = {};.    fl
	0x6f, 0x61, 0x74, 0x20, 0x5f, 0x31, 0x32, 0x36, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28, 0x66, // oat _126 = dot(f
	0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x69, // ast::normalize(i
	0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // n.v_normal), flo
	0x61, 0x74, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, // at3(0.0, 0.0, -1
	0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, // .0));.    out.bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x66, // fx_FragData0 = f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x70, 0x6f, 0x77, 0x72, 0x28, 0x28, 0x70, 0x6f, 0x77, 0x72, // loat4(powr((powr
	0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, // (in.v_color0.xyz
	0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x32, 0x2e, 0x32, 0x30, 0x30, 0x30, 0x30, // , float3(2.20000
	0x30, 0x30, 0x34, 0x37, 0x36, 0x38, 0x33, 0x37, 0x31, 0x35, 0x38, 0x32, 0x30, 0x33, 0x31, 0x32, // 0047683715820312
	0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x31, 0x32, 0x36, 0x29, 0x20, 0x2b, 0x20, 0x66, 0x6c, // 5)) * _126) + fl
	0x6f, 0x61, 0x74, 0x33, 0x28, 0x70, 0x6f, 0x77, 0x72, 0x28, 0x5f, 0x31, 0x32, 0x36, 0x2c, 0x20, // oat3(powr(_126, 
	0x33, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x30, // 30.0)), float3(0
	0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x36, 0x38, 0x30, 0x39, 0x31, 0x39, 0x36, 0x34, // .454545468091964
	0x37, 0x32, 0x31, 0x36, 0x37, 0x39, 0x36, 0x38, 0x37, 0x35, 0x29, 0x29, 0x2c, 0x20, 0x31, 0x2e, // 7216796875)), 1.
	0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, // 0);.    return o
	0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,                               // ut;.}......
};
extern const uint8_t* fs_metaballs_pssl;
extern const uint32_t fs_metaballs_pssl_size;
