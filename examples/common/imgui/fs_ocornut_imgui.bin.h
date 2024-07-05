static const uint8_t fs_ocornut_imgui_glsl[189] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x00, // _tex............
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ..varying vec4 v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // _color0;.varying
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  vec2 v_texcoord
	0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, // 0;.uniform sampl
	0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // er2D s_tex;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, //  main ().{.  gl_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, // FragColor = (tex
	0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x2c, 0x20, 0x76, // ture2D (s_tex, v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x76, 0x5f, // _texcoord0) * v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // color0);.}...
};
static const uint8_t fs_ocornut_imgui_essl[246] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd3, 0x00, // _tex............
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, // vec4 v_color0;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, // 2 v_texcoord0;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
	0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, //  s_tex;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, // n ().{.  lowp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // mpvar_1 = textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, // e2D (s_tex, v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, // xcoord0);.  gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // ragColor = (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, // ar_1 * v_color0)
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
static const uint8_t fs_ocornut_imgui_spv[850] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x00, 0x2c, 0x03, // _tex0.......".,.
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x91, 0x00, // ....#...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x5f, 0x00, // in....N...R..._.
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x23, 0x00, // ..main........#.
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, // ..s_texSampler..
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x26, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x54, // ......&...s_texT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x4e, 0x00, // exture........N.
	0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_color0......
	0x05, 0x00, 0x52, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ..R...v_texcoord
	0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // 0....._...bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, // ragData0..G...#.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, // ..".......G...#.
	0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, // ..!.......G...&.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, // ..".......G...&.
	0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4e, 0x00, // ..!.......G...N.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x52, 0x00, // ..........G...R.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5f, 0x00, // ..........G..._.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, // ..!.............
	0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... ...".....
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, // ......;..."...#.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... ...%.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x26, 0x00, // ......;...%...&.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, // ..........2.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. ...J.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...J...N.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // .. ...Q.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...Q...R.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. ...^.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...^..._.....
	0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......$...#...=.
	0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......'...&...=.
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......O...N...=.
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x56, 0x00, // ......S...R...V.
	0x05, 0x00, 0x32, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x24, 0x00, // ..2.......'...$.
	0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x8e, 0x00, // ..W.............
	0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x83, 0x00, // ..S.............
	0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5f, 0x00, // ......O...>..._.
	0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, // ..........8.....
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t fs_ocornut_imgui_wgsl[742] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x05, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x00, 0xc0, 0x02, // _tex0......."...
	0x00, 0x00, 0x40, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x28, 0x30, 0x29, 0x20, 0x40, 0x62, 0x69, 0x6e, // ..@group(0) @bin
	0x64, 0x69, 0x6e, 0x67, 0x28, 0x31, 0x38, 0x29, 0x20, 0x76, 0x61, 0x72, 0x20, 0x73, 0x5f, 0x74, // ding(18) var s_t
	0x65, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x3a, 0x20, 0x73, 0x61, 0x6d, 0x70, // exSampler : samp
	0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x0a, 0x40, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x28, 0x30, 0x29, 0x20, // ler;..@group(0) 
	0x40, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x28, 0x32, 0x29, 0x20, 0x76, 0x61, 0x72, 0x20, // @binding(2) var 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x3a, 0x20, 0x74, // s_texTexture : t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x5f, 0x32, 0x64, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, // exture_2d<f32>;.
	0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, // .var<private> v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x3b, 0x0a, // color0 : vec4f;.
	0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, // .var<private> v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x32, // texcoord0 : vec2
	0x66, 0x3b, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, // f;..var<private>
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, //  bgfx_FragData0 
	0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x3b, 0x0a, 0x0a, 0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, // : vec4f;..fn mai
	0x6e, 0x5f, 0x31, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x5f, // n_1() {.  let x_
	0x37, 0x39, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, // 79 = v_color0;. 
	0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x5f, 0x38, 0x33, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x74, 0x65, //  let x_83 = v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, // xcoord0;.  let x
	0x5f, 0x31, 0x34, 0x34, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, // _144 = textureSa
	0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // mple(s_texTextur
	0x65, 0x2c, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // e, s_texSampler,
	0x20, 0x78, 0x5f, 0x38, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, //  x_83);.  bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x78, 0x5f, 0x31, 0x34, // ragData0 = (x_14
	0x34, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x37, 0x39, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, // 4 * x_79);.  ret
	0x75, 0x72, 0x6e, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x6d, // urn;.}..struct m
	0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x40, 0x6c, 0x6f, 0x63, // ain_out {.  @loc
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, // ation(0).  bgfx_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x5f, 0x31, 0x20, 0x3a, 0x20, 0x76, 0x65, // FragData0_1 : ve
	0x63, 0x34, 0x66, 0x2c, 0x0a, 0x7d, 0x0a, 0x0a, 0x40, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, // c4f,.}..@fragmen
	0x74, 0x0a, 0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, // t.fn main(@locat
	0x69, 0x6f, 0x6e, 0x28, 0x30, 0x29, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, // ion(0) v_color0_
	0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x2c, 0x20, 0x40, // param : vec4f, @
	0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x31, 0x29, 0x20, 0x76, 0x5f, 0x74, 0x65, // location(1) v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, 0x3a, 0x20, // xcoord0_param : 
	0x76, 0x65, 0x63, 0x32, 0x66, 0x29, 0x20, 0x2d, 0x3e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, // vec2f) -> main_o
	0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, // ut {.  v_color0 
	0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // = v_color0_param
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // ;.  v_texcoord0 
	0x3d, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x5f, 0x70, 0x61, // = v_texcoord0_pa
	0x72, 0x61, 0x6d, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, 0x3b, // ram;.  main_1();
	0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, // .  return main_o
	0x75, 0x74, 0x28, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // ut(bgfx_FragData
	0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0);.}...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,                                                             // ......
};
static const uint8_t fs_ocornut_imgui_dx11[434] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x73, // _tex0..........s
	0x5f, 0x74, 0x65, 0x78, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x01, // _tex0.........|.
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x9f, 0xc3, 0xdd, 0xee, 0xdf, 0xe0, 0xb0, 0x54, 0xaa, 0x51, // ..DXBC.......T.Q
	0xec, 0xb4, 0x2a, 0xf6, 0x8e, 0x43, 0x01, 0x00, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0x03, 0x00, // ..*..C....|.....
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, 0xa0, 0x00, 0x00, 0x00, 0x50, 0x00, // GET...SHEX....P.
	0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, // ..(...j...Z....`
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, // ......X....p....
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, // ..UU..b.........
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, // ..b...2.......e.
	0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, // ... ......h.....
	0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, // ..E.......CU....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, // ......F.......F~
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // .......`......8.
	0x00, 0x07, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, // ..F.......>.....
	0x00, 0x00,                                                                                     // ..
};
static const uint8_t fs_ocornut_imgui_mtl[609] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0c, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x11, 0x01, 0xff, 0xff, 0x01, // _texSampler.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, // ......s_texTextu
	0x72, 0x65, 0x11, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x73, 0x5f, 0x74, // re...........s_t
	0x65, 0x78, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x02, 0x00, 0x00, // ex..............
	0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, // #include <metal_
	0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, // stdlib>.#include
	0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, //  <simd/simd.h>..
	0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, // using namespace 
	0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // metal;..struct x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, // latMtlMain_out.{
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, // .    float4 bgfx
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, // _FragData0 [[col
	0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, // or(0)]];.};..str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // uct xlatMtlMain_
	0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // in.{.    float4 
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, // v_color0 [[user(
	0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // locn0)]];.    fl
	0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // oat2 v_texcoord0
	0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, //  [[user(locn1)]]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, // ;.};..fragment x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, // latMtlMain_out x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, // latMtlMain(xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, // tlMain_in in [[s
	0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // tage_in]], textu
	0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, // re2d<float> s_te
	0x78, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, // x [[texture(0)]]
	0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x53, // , sampler s_texS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // ampler [[sampler
	0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, // (0)]]).{.    xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, // tMtlMain_out out
	0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, //  = {};.    out.b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, // gfx_FragData0 = 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, // s_tex.sample(s_t
	0x65, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // exSampler, in.v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x69, 0x6e, 0x2e, // texcoord0) * in.
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, // v_color0;.    re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x20, // turn out;.}.... 
	0x00,                                                                                           // .
};
extern const uint8_t* fs_ocornut_imgui_pssl;
extern const uint32_t fs_ocornut_imgui_pssl_size;
