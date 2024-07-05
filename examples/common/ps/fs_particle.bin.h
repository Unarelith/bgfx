static const uint8_t fs_particle_glsl[389] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _texColor.......
	0x00, 0x00, 0x00, 0x5d, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, // ...]...varying v
	0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, // ec4 v_color0;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // rying vec4 v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // coord0;.uniform 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // sampler2D s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, // olor;.void main 
	0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x67, 0x62, 0x61, // ().{.  vec4 rgba
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // _1;.  vec4 tmpva
	0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, // r_2;.  tmpvar_2 
	0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, // = texture2D (s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // exColor, v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, // ord0.xy);.  rgba
	0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // _1.xyz = ((tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x78, 0x78, 0x78, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // r_2.xxx * v_colo
	0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // r0.xyz) * (tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // r_2.x * v_color0
	0x2e, 0x77, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x2e, 0x77, // .w));.  rgba_1.w
	0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, //  = ((tmpvar_2.x 
	0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x20, 0x2a, 0x20, // * v_color0.w) * 
	0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // (1.0 - v_texcoor
	0x64, 0x30, 0x2e, 0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // d0.z));.  gl_Fra
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x3b, // gColor = rgba_1;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                                   // .}...
};
static const uint8_t fs_particle_essl[411] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _texColor.......
	0x00, 0x00, 0x00, 0x73, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, // ...s...varying h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // ighp vec4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, // r0;.varying high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // p vec4 v_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, // d0;.uniform samp
	0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ler2D s_texColor
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x67, 0x62, // .  lowp vec4 rgb
	0x61, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // a_1;.  lowp vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_2;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // var_2 = texture2
	0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, // D (s_texColor, v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, // _texcoord0.xy);.
	0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, //   rgba_1.xyz = (
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x78, 0x78, 0x20, 0x2a, 0x20, // (tmpvar_2.xxx * 
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, // v_color0.xyz) * 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x76, 0x5f, // (tmpvar_2.x * v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, // color0.w));.  rg
	0x62, 0x61, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // ba_1.w = ((tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // r_2.x * v_color0
	0x2e, 0x77, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x74, // .w) * (1.0 - v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // excoord0.z));.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x72, // gl_FragColor = r
	0x67, 0x62, 0x61, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // gba_1;.}...
};
static const uint8_t fs_particle_spv[1271] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // _texColor0......
	0x02, 0x22, 0x00, 0xcc, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0b, // .".......#......
	0x00, 0x08, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, // ................
	0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, // ...........GLSL.
	0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, // std.450.........
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x73, // ...main....p...s
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, // ................
	0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, // ................
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, // .......main.....
	0x00, 0x07, 0x00, 0x23, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // ...#...s_texColo
	0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x26, // rSampler.......&
	0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, // ...s_texColorTex
	0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x70, 0x00, 0x00, 0x00, 0x76, // ture.......p...v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x73, // _color0........s
	0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, // ...v_texcoord0..
	0x00, 0x06, 0x00, 0x80, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, // .......bgfx_Frag
	0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x22, // Data0..G...#..."
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x21, // .......G...#...!
	0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x22, // .......G...&..."
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x21, // .......G...&...!
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x70, 0x00, 0x00, 0x00, 0x1e, // .......G...p....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x73, 0x00, 0x00, 0x00, 0x1e, // .......G...s....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x80, 0x00, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, // ...............!
	0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, // ................
	0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, // ........... ....
	0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, // ... ..."........
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, // ...;..."...#....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, // ... ...%........
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, // ...;...%...&....
	0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, // .......2........
	0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, // ...H...........+
	0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x20, // .......d......? 
	0x00, 0x04, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, // ...l...........;
	0x00, 0x04, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, // ...l...p.......;
	0x00, 0x04, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, // ...l...s....... 
	0x00, 0x04, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, // ...............;
	0x00, 0x04, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2e, // ................
	0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, // ...........6....
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, // ................
	0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x24, // .......=.......$
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x27, // ...#...=.......'
	0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x71, // ...&...=.......q
	0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x74, // ...p...=.......t
	0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xa0, // ...s...O........
	0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, // ...t...t........
	0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x32, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x27, // ...V...2.......'
	0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xcb, // ...$...W........
	0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x48, // ...........O...H
	0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x48, // ...........O...H
	0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x00, // .......q...q....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x48, // ...............H
	0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xa7, // .......H........
	0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xac, // .......Q........
	0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x48, // ...q...........H
	0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xad, // ...Q............
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb3, // .......Q........
	0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, // ...........Q....
	0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, // ...............Q
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x03, // ...........q....
	0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xb5, // ................
	0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xba, // .......Q........
	0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x83, 0x00, 0x05, 0x00, 0x07, // ...t............
	0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0x00, 0x85, // .......d........
	0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xbb, // ................
	0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0xaf, // ...P............
	0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x3e, // ...............>
	0x00, 0x03, 0x00, 0x80, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, // ...............8
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,                                                       // .......
};
static const uint8_t fs_particle_wgsl[899] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, // _texColor0......
	0x02, 0x22, 0x00, 0x58, 0x03, 0x00, 0x00, 0x40, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x28, 0x30, 0x29, // .".X...@group(0)
	0x20, 0x40, 0x62, 0x69, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x28, 0x31, 0x38, 0x29, 0x20, 0x76, 0x61, //  @binding(18) va
	0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, // r s_texColorSamp
	0x6c, 0x65, 0x72, 0x20, 0x3a, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x0a, // ler : sampler;..
	0x40, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x28, 0x30, 0x29, 0x20, 0x40, 0x62, 0x69, 0x6e, 0x64, 0x69, // @group(0) @bindi
	0x6e, 0x67, 0x28, 0x32, 0x29, 0x20, 0x76, 0x61, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ng(2) var s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x3a, 0x20, 0x74, 0x65, // olorTexture : te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x5f, 0x32, 0x64, 0x3c, 0x66, 0x33, 0x32, 0x3e, 0x3b, 0x0a, 0x0a, // xture_2d<f32>;..
	0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x63, // var<private> v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x3b, 0x0a, 0x0a, // olor0 : vec4f;..
	0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, 0x76, 0x5f, 0x74, // var<private> v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, // excoord0 : vec4f
	0x3b, 0x0a, 0x0a, 0x76, 0x61, 0x72, 0x3c, 0x70, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x3e, 0x20, // ;..var<private> 
	0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3a, // bgfx_FragData0 :
	0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x3b, 0x0a, 0x0a, 0x66, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, //  vec4f;..fn main
	0x5f, 0x31, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x5f, 0x31, // _1() {.  let x_1
	0x31, 0x33, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x20, // 13 = v_color0;. 
	0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x5f, 0x31, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x74, //  let x_116 = v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, // excoord0;.  let 
	0x78, 0x5f, 0x32, 0x30, 0x33, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, // x_203 = textureS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ample(s_texColor
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // Texture, s_texCo
	0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x78, 0x5f, 0x31, 0x31, // lorSampler, x_11
	0x36, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x65, 0x74, 0x20, 0x78, 0x5f, 0x31, // 6.xy);.  let x_1
	0x37, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x28, 0x78, 0x5f, 0x32, 0x30, 0x33, 0x2e, 0x78, 0x78, // 73 = (((x_203.xx
	0x78, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x31, 0x31, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, // x * x_113.xyz) *
	0x20, 0x78, 0x5f, 0x32, 0x30, 0x33, 0x2e, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x31, 0x31, //  x_203.x) * x_11
	0x33, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, // 3.w);.  bgfx_Fra
	0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x28, 0x78, // gData0 = vec4f(x
	0x5f, 0x31, 0x37, 0x33, 0x2e, 0x78, 0x2c, 0x20, 0x78, 0x5f, 0x31, 0x37, 0x33, 0x2e, 0x79, 0x2c, // _173.x, x_173.y,
	0x20, 0x78, 0x5f, 0x31, 0x37, 0x33, 0x2e, 0x7a, 0x2c, 0x20, 0x28, 0x28, 0x78, 0x5f, 0x32, 0x30, //  x_173.z, ((x_20
	0x33, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x78, 0x5f, 0x31, 0x31, 0x33, 0x2e, 0x77, 0x29, 0x20, 0x2a, // 3.x * x_113.w) *
	0x20, 0x28, 0x31, 0x2e, 0x30, 0x66, 0x20, 0x2d, 0x20, 0x78, 0x5f, 0x31, 0x31, 0x36, 0x2e, 0x7a, //  (1.0f - x_116.z
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x3b, 0x0a, 0x7d, // )));.  return;.}
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, // ..struct main_ou
	0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, // t {.  @location(
	0x30, 0x29, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, // 0).  bgfx_FragDa
	0x74, 0x61, 0x30, 0x5f, 0x31, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x2c, 0x0a, 0x7d, // ta0_1 : vec4f,.}
	0x0a, 0x0a, 0x40, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x0a, 0x66, 0x6e, 0x20, 0x6d, // ..@fragment.fn m
	0x61, 0x69, 0x6e, 0x28, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x30, 0x29, // ain(@location(0)
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, //  v_color0_param 
	0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x2c, 0x20, 0x40, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, // : vec4f, @locati
	0x6f, 0x6e, 0x28, 0x31, 0x29, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // on(1) v_texcoord
	0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x20, 0x3a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x66, 0x29, // 0_param : vec4f)
	0x20, 0x2d, 0x3e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, //  -> main_out {. 
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, //  v_color0 = v_co
	0x6c, 0x6f, 0x72, 0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, // lor0_param;.  v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x74, 0x65, // texcoord0 = v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x3b, 0x0a, 0x20, // xcoord0_param;. 
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x31, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, //  main_1();.  ret
	0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x28, 0x62, 0x67, 0x66, // urn main_out(bgf
	0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, // x_FragData0);.}.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00,                                                                               // ...
};
static const uint8_t fs_particle_dx11[560] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _texColor0......
	0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, // ....s_texColor0.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, // ............DXBC
	0x8f, 0x83, 0x25, 0x3c, 0x11, 0xea, 0x33, 0x00, 0xb9, 0xe6, 0xdb, 0x76, 0x41, 0xd6, 0x4a, 0x0e, // ..%<..3....vA.J.
	0x01, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x45, 0x58, 0x14, 0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, // SHEX....P...E...
	0x6a, 0x08, 0x00, 0x01, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // j...Z....`......
	0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, // X....p......UU..
	0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // b...........b...
	0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // r.......e.... ..
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, // ....h.......E...
	0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....CU..........
	0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // F.......F~......
	0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, // .`......8..."...
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....8...........
	0x46, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x19, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // F.......6.......
	0x38, 0x00, 0x00, 0x07, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, // 8...r ..........
	0x00, 0x00, 0x00, 0x00, 0xf6, 0x1f, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, // ................
	0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x10, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, // ".......*...A...
	0x02, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x38, 0x00, 0x00, 0x07, // .....@.....?8...
	0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // . ..............
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // ........>.......
};
static const uint8_t fs_particle_mtl[769] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x11, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // _texColorSampler
	0x11, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x73, 0x5f, 0x74, 0x65, 0x78, // ...........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0xff, 0xff, // ColorTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x02, 0x00, 0x00, 0x23, // r..............#
	0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, // include <metal_s
	0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, // tdlib>.#include 
	0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, // <simd/simd.h>..u
	0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, // sing namespace m
	0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // etal;..struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, // atMtlMain_out.{.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, //     float4 bgfx_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, // FragData0 [[colo
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, // r(0)]];.};..stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, // ct xlatMtlMain_i
	0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, // n.{.    float4 v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, // _color0 [[user(l
	0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // ocn0)]];.    flo
	0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // at4 v_texcoord0 
	0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [[user(locn1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, // .};..fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, // atMtlMain_out xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // atMtlMain(xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, // lMain_in in [[st
	0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // age_in]], textur
	0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, // e2d<float> s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // Color [[texture(
	0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, // 0)]], sampler s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, // texColorSampler 
	0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, // [[sampler(0)]]).
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // {.    xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, // n_out out = {};.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x32, 0x30, 0x30, 0x20, //     float4 _200 
	0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, // = s_texColor.sam
	0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, // ple(s_texColorSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // mpler, in.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, // oord0.xy);.    o
	0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // ut.bgfx_FragData
	0x30, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x28, 0x28, 0x5f, 0x32, 0x30, // 0 = float4(((_20
	0x30, 0x2e, 0x78, 0x78, 0x78, 0x20, 0x2a, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // 0.xxx * in.v_col
	0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x32, 0x30, 0x30, 0x2e, // or0.xyz) * _200.
	0x78, 0x29, 0x20, 0x2a, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // x) * in.v_color0
	0x2e, 0x77, 0x2c, 0x20, 0x28, 0x5f, 0x32, 0x30, 0x30, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x69, 0x6e, // .w, (_200.x * in
	0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x20, 0x2a, 0x20, 0x28, // .v_color0.w) * (
	0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // 1.0 - in.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, // ord0.z));.    re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x20, // turn out;.}.... 
	0x00,                                                                                           // .
};
extern const uint8_t* fs_particle_pssl;
extern const uint32_t fs_particle_pssl_size;
