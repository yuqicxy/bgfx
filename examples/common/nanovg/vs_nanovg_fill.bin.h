static const uint8_t vs_nanovg_fill_glsl[541] =
{
	0x56, 0x53, 0x48, 0x03, 0xcf, 0xda, 0x1b, 0x94, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x53, 0x69, 0x7a, 0x65, 0x05, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0b, 0x75, 0x5f, 0x68, 0x61, // wSize.......u_ha
	0x6c, 0x66, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x07, 0x01, 0x00, 0x00, 0x01, 0x00, 0xeb, 0x01, 0x00, // lfTexel.........
	0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // .attribute highp
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, //  vec2 a_position
	0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, // ;.attribute high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // p vec2 a_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, // d0;.varying high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // p vec2 v_positio
	0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // n;.varying highp
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, //  vec2 v_texcoord
	0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 0;.uniform highp
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x53, 0x69, 0x7a, 0x65, //  vec2 u_viewSize
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ;.uniform highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x68, 0x61, 0x6c, 0x66, 0x54, 0x65, 0x78, 0x65, 0x6c, // vec4 u_halfTexel
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, // .  v_position = 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, // a_position;.  v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, // texcoord0 = (a_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x75, 0x5f, 0x68, 0x61, 0x6c, // excoord0 + u_hal
	0x66, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, // fTexel.xy);.  hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ghp vec4 tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x77, // 1;.  tmpvar_1.zw
	0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, //  = vec2(0.0, 1.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x20, // );.  tmpvar_1.x 
	0x3d, 0x20, 0x28, 0x28, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, // = (((2.0 * a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x29, 0x20, 0x2f, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, // ition.x) / u_vie
	0x77, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x29, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, // wSize.x) - 1.0);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  tmpvar_1.y = 
	0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x61, // (1.0 - ((2.0 * a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x79, 0x29, 0x20, 0x2f, 0x20, 0x75, // _position.y) / u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, // _viewSize.y));. 
	0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x74, //  gl_Position = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // mpvar_1;.}...
};
static const uint8_t vs_nanovg_fill_dx9[448] =
{
	0x56, 0x53, 0x48, 0x03, 0xcf, 0xda, 0x1b, 0x94, 0x02, 0x00, 0x0b, 0x75, 0x5f, 0x68, 0x61, 0x6c, // VSH........u_hal
	0x66, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x05, 0x01, 0x01, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, // fTexel.......u_v
	0x69, 0x65, 0x77, 0x53, 0x69, 0x7a, 0x65, 0x05, 0x01, 0x00, 0x00, 0x01, 0x00, 0x90, 0x01, 0x00, // iewSize.........
	0x03, 0xfe, 0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, // .......CTAB.....
	0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, // ................
	0x91, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, // ...|...D........
	0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, // ...P.......`....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, // .......l.......u
	0x5f, 0x68, 0x61, 0x6c, 0x66, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, // _halfTexel......
	0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, // ...........u_vie
	0x77, 0x53, 0x69, 0x7a, 0x65, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, // wSize...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......vs_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, //  9.29.952.3111.Q
	0x00, 0x00, 0x05, 0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0x3f, 0x00, // ..............?.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, // ................
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, // ................
	0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x02, // ................
	0x00, 0x03, 0xe0, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x03, 0xe0, 0x01, 0x00, 0xe4, 0xa0, 0x01, // ................
	0x00, 0xe4, 0x90, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x02, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x06, 0x80, 0x00, 0x00, 0xd0, 0x90, 0x00, 0x00, 0xd0, 0x90, 0x04, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, // .........U......
	0x00, 0x00, 0xa0, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x04, // .............U..
	0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0xe0, 0x00, 0x00, 0xaa, 0x80, 0x00, 0x00, 0x00, 0x81, 0x02, // ................
	0x00, 0x55, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0c, 0xe0, 0x02, 0x00, 0x64, 0xa0, 0x01, // .U...........d..
	0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0xe0, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00, // ................
};
static const uint8_t vs_nanovg_fill_dx11[577] =
{
	0x56, 0x53, 0x48, 0x03, 0xcf, 0xda, 0x1b, 0x94, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x53, 0x69, 0x7a, 0x65, 0x05, 0x00, 0x24, 0x0a, 0x01, 0x00, 0x1c, 0x02, 0x44, 0x58, 0x42, // wSize..$.....DXB
	0x43, 0x96, 0x69, 0x2a, 0xf0, 0x03, 0xd1, 0xd8, 0x4a, 0x3e, 0x52, 0x3a, 0x0a, 0x08, 0x07, 0x7b, // C.i*....J>R:...{
	0x28, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // (............,..
	0x00, 0x80, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, // .........ISGNL..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, // ................
	0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .A..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // .........POSITIO
	0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, // N.TEXCOORD...OSG
	0x4e, 0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, // Nh...........P..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x5c, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x0c, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, // .....SV_POSITION
	0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, // .TEXCOORD....SHD
	0x52, 0x24, 0x01, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x49, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, // R$...@...I...Y..
	0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // .F. ........._..
	0x03, 0x32, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, // .2......._...2..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....g.... .....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, // .....e...2 .....
	0x00, 0x65, 0x00, 0x00, 0x03, 0xc2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .e.... ......h..
	0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .........2......
	0x00, 0x46, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F......
	0x00, 0x0e, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, // .....2.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, // ....... ........
	0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // ...... .........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, // ......@.........
	0x08, 0x22, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, // ." ..........A..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x36, 0x00, 0x00, // ......@.....?6..
	0x08, 0xc2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // .. .......@.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x36, 0x00, 0x00, // ............?6..
	0x05, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // .2 ......F......
	0x00, 0x36, 0x00, 0x00, 0x05, 0xc2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x14, 0x10, // .6.... .........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, 0x10, 0x00, 0x30, // .....>.........0
	0x0a,                                                                                           // .
};
