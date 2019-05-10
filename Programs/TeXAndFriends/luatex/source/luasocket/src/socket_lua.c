/*
 * This file is generated with xxd -i and bit of bash script.
*/
#include "lua.h"
#include "lauxlib.h"
 
int luatex_socket_lua_open (lua_State *L) { 
#if defined(MIKTEX)
    static
#include "luasocket-socket.lua.h"
#else
    static unsigned char B[] = {
  0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x62, 0x61, 0x73, 0x65, 0x20, 0x3d,
  0x20, 0x5f, 0x47, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 0x74,
  0x72, 0x69, 0x6e, 0x67, 0x20, 0x3d, 0x20, 0x72, 0x65, 0x71, 0x75, 0x69,
  0x72, 0x65, 0x28, 0x22, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x22, 0x29,
  0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6d, 0x61, 0x74, 0x68, 0x20,
  0x3d, 0x20, 0x72, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x28, 0x22, 0x6d,
  0x61, 0x74, 0x68, 0x22, 0x29, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20,
  0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x72, 0x65, 0x71,
  0x75, 0x69, 0x72, 0x65, 0x28, 0x22, 0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74,
  0x2e, 0x63, 0x6f, 0x72, 0x65, 0x22, 0x29, 0x0a, 0x6c, 0x6f, 0x63, 0x61,
  0x6c, 0x20, 0x5f, 0x4d, 0x20, 0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x65,
  0x74, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5f,
  0x4d, 0x2e, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x34, 0x28, 0x61,
  0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c, 0x20, 0x70, 0x6f, 0x72, 0x74,
  0x2c, 0x20, 0x6c, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c, 0x20,
  0x6c, 0x70, 0x6f, 0x72, 0x74, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74,
  0x2e, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x28, 0x61, 0x64, 0x64,
  0x72, 0x65, 0x73, 0x73, 0x2c, 0x20, 0x70, 0x6f, 0x72, 0x74, 0x2c, 0x20,
  0x6c, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c, 0x20, 0x6c, 0x70,
  0x6f, 0x72, 0x74, 0x2c, 0x20, 0x22, 0x69, 0x6e, 0x65, 0x74, 0x22, 0x29,
  0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x5f, 0x4d, 0x2e, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74,
  0x36, 0x28, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c, 0x20, 0x70,
  0x6f, 0x72, 0x74, 0x2c, 0x20, 0x6c, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73,
  0x73, 0x2c, 0x20, 0x6c, 0x70, 0x6f, 0x72, 0x74, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63,
  0x6b, 0x65, 0x74, 0x2e, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x28,
  0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c, 0x20, 0x70, 0x6f, 0x72,
  0x74, 0x2c, 0x20, 0x6c, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x2c,
  0x20, 0x6c, 0x70, 0x6f, 0x72, 0x74, 0x2c, 0x20, 0x22, 0x69, 0x6e, 0x65,
  0x74, 0x36, 0x22, 0x29, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x66, 0x75, 0x6e,
  0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5f, 0x4d, 0x2e, 0x62, 0x69, 0x6e,
  0x64, 0x28, 0x68, 0x6f, 0x73, 0x74, 0x2c, 0x20, 0x70, 0x6f, 0x72, 0x74,
  0x2c, 0x20, 0x62, 0x61, 0x63, 0x6b, 0x6c, 0x6f, 0x67, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x68, 0x6f, 0x73, 0x74, 0x20, 0x3d,
  0x3d, 0x20, 0x22, 0x2a, 0x22, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x68,
  0x6f, 0x73, 0x74, 0x20, 0x3d, 0x20, 0x22, 0x30, 0x2e, 0x30, 0x2e, 0x30,
  0x2e, 0x30, 0x22, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x61, 0x64, 0x64, 0x72, 0x69, 0x6e,
  0x66, 0x6f, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x20, 0x3d, 0x20, 0x73, 0x6f,
  0x63, 0x6b, 0x65, 0x74, 0x2e, 0x64, 0x6e, 0x73, 0x2e, 0x67, 0x65, 0x74,
  0x61, 0x64, 0x64, 0x72, 0x69, 0x6e, 0x66, 0x6f, 0x28, 0x68, 0x6f, 0x73,
  0x74, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x6e,
  0x6f, 0x74, 0x20, 0x61, 0x64, 0x64, 0x72, 0x69, 0x6e, 0x66, 0x6f, 0x20,
  0x74, 0x68, 0x65, 0x6e, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
  0x6e, 0x69, 0x6c, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x20, 0x65, 0x6e, 0x64,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73,
  0x6f, 0x63, 0x6b, 0x2c, 0x20, 0x72, 0x65, 0x73, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x72, 0x72, 0x20, 0x3d, 0x20, 0x22, 0x6e, 0x6f, 0x20, 0x69,
  0x6e, 0x66, 0x6f, 0x20, 0x6f, 0x6e, 0x20, 0x61, 0x64, 0x64, 0x72, 0x65,
  0x73, 0x73, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20,
  0x69, 0x2c, 0x20, 0x61, 0x6c, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x62, 0x61,
  0x73, 0x65, 0x2e, 0x69, 0x70, 0x61, 0x69, 0x72, 0x73, 0x28, 0x61, 0x64,
  0x64, 0x72, 0x69, 0x6e, 0x66, 0x6f, 0x29, 0x20, 0x64, 0x6f, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x61, 0x6c,
  0x74, 0x2e, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 0x20, 0x3d, 0x3d, 0x20,
  0x22, 0x69, 0x6e, 0x65, 0x74, 0x22, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x73, 0x6f, 0x63, 0x6b, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x20, 0x3d, 0x20,
  0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74, 0x2e, 0x74, 0x63, 0x70, 0x34, 0x28,
  0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c,
  0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x2c, 0x20, 0x65, 0x72, 0x72,
  0x20, 0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74, 0x2e, 0x74, 0x63,
  0x70, 0x36, 0x28, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x73, 0x6f, 0x63, 0x6b,
  0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e,
  0x20, 0x6e, 0x69, 0x6c, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x20, 0x65, 0x6e,
  0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x6f,
  0x63, 0x6b, 0x3a, 0x73, 0x65, 0x74, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e,
  0x28, 0x22, 0x72, 0x65, 0x75, 0x73, 0x65, 0x61, 0x64, 0x64, 0x72, 0x22,
  0x2c, 0x20, 0x74, 0x72, 0x75, 0x65, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x2c, 0x20, 0x65, 0x72, 0x72,
  0x20, 0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x62, 0x69, 0x6e, 0x64,
  0x28, 0x61, 0x6c, 0x74, 0x2e, 0x61, 0x64, 0x64, 0x72, 0x2c, 0x20, 0x70,
  0x6f, 0x72, 0x74, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x72, 0x65, 0x73, 0x20,
  0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x63, 0x6c,
  0x6f, 0x73, 0x65, 0x28, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x2c, 0x20,
  0x65, 0x72, 0x72, 0x20, 0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x6c,
  0x69, 0x73, 0x74, 0x65, 0x6e, 0x28, 0x62, 0x61, 0x63, 0x6b, 0x6c, 0x6f,
  0x67, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x72, 0x65,
  0x73, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73,
  0x6f, 0x63, 0x6b, 0x3a, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x28, 0x29, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74,
  0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6e, 0x69, 0x6c, 0x2c,
  0x20, 0x65, 0x72, 0x72, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x5f, 0x4d, 0x2e,
  0x74, 0x72, 0x79, 0x20, 0x3d, 0x20, 0x5f, 0x4d, 0x2e, 0x6e, 0x65, 0x77,
  0x74, 0x72, 0x79, 0x28, 0x29, 0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x20, 0x5f, 0x4d, 0x2e, 0x63, 0x68, 0x6f, 0x6f, 0x73, 0x65,
  0x28, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74,
  0x69, 0x6f, 0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x20, 0x6f, 0x70,
  0x74, 0x31, 0x2c, 0x20, 0x6f, 0x70, 0x74, 0x32, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x62, 0x61, 0x73,
  0x65, 0x2e, 0x74, 0x79, 0x70, 0x65, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x29,
  0x20, 0x7e, 0x3d, 0x20, 0x22, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x22,
  0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x20,
  0x6f, 0x70, 0x74, 0x31, 0x2c, 0x20, 0x6f, 0x70, 0x74, 0x32, 0x20, 0x3d,
  0x20, 0x22, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x22, 0x2c, 0x20,
  0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x20, 0x6f, 0x70, 0x74, 0x31, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
  0x20, 0x66, 0x20, 0x3d, 0x20, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x5b, 0x6e,
  0x61, 0x6d, 0x65, 0x20, 0x6f, 0x72, 0x20, 0x22, 0x6e, 0x69, 0x6c, 0x22,
  0x5d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66,
  0x20, 0x6e, 0x6f, 0x74, 0x20, 0x66, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20,
  0x62, 0x61, 0x73, 0x65, 0x2e, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x28, 0x22,
  0x75, 0x6e, 0x6b, 0x6e, 0x6f, 0x77, 0x6e, 0x20, 0x6b, 0x65, 0x79, 0x20,
  0x28, 0x22, 0x2e, 0x2e, 0x20, 0x62, 0x61, 0x73, 0x65, 0x2e, 0x74, 0x6f,
  0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x29,
  0x20, 0x2e, 0x2e, 0x22, 0x29, 0x22, 0x2c, 0x20, 0x33, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20,
  0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66, 0x28, 0x6f, 0x70, 0x74,
  0x31, 0x2c, 0x20, 0x6f, 0x70, 0x74, 0x32, 0x29, 0x20, 0x65, 0x6e, 0x64,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x65, 0x6e, 0x64,
  0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x74, 0x2c, 0x20, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x20, 0x3d, 0x20,
  0x7b, 0x7d, 0x2c, 0x20, 0x7b, 0x7d, 0x0a, 0x5f, 0x4d, 0x2e, 0x73, 0x6f,
  0x75, 0x72, 0x63, 0x65, 0x74, 0x20, 0x3d, 0x20, 0x73, 0x6f, 0x75, 0x72,
  0x63, 0x65, 0x74, 0x0a, 0x5f, 0x4d, 0x2e, 0x73, 0x69, 0x6e, 0x6b, 0x74,
  0x20, 0x3d, 0x20, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x0a, 0x5f, 0x4d, 0x2e,
  0x42, 0x4c, 0x4f, 0x43, 0x4b, 0x53, 0x49, 0x5a, 0x45, 0x20, 0x3d, 0x20,
  0x32, 0x30, 0x34, 0x38, 0x0a, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x5b, 0x22,
  0x63, 0x6c, 0x6f, 0x73, 0x65, 0x2d, 0x77, 0x68, 0x65, 0x6e, 0x2d, 0x64,
  0x6f, 0x6e, 0x65, 0x22, 0x5d, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x28, 0x73, 0x6f, 0x63, 0x6b, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x62, 0x61,
  0x73, 0x65, 0x2e, 0x73, 0x65, 0x74, 0x6d, 0x65, 0x74, 0x61, 0x74, 0x61,
  0x62, 0x6c, 0x65, 0x28, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x67, 0x65, 0x74, 0x66, 0x64, 0x20, 0x3d, 0x20, 0x66, 0x75,
  0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x20, 0x72, 0x65, 0x74,
  0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x67, 0x65, 0x74,
  0x66, 0x64, 0x28, 0x29, 0x20, 0x65, 0x6e, 0x64, 0x2c, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x72, 0x74, 0x79, 0x20,
  0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b,
  0x3a, 0x64, 0x69, 0x72, 0x74, 0x79, 0x28, 0x29, 0x20, 0x65, 0x6e, 0x64,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x2c, 0x20, 0x7b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x63, 0x61, 0x6c, 0x6c,
  0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28,
  0x73, 0x65, 0x6c, 0x66, 0x2c, 0x20, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x2c,
  0x20, 0x65, 0x72, 0x72, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74,
  0x20, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x63, 0x6c, 0x6f,
  0x73, 0x65, 0x28, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74,
  0x75, 0x72, 0x6e, 0x20, 0x31, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x73,
  0x65, 0x6e, 0x64, 0x28, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x29, 0x20, 0x65,
  0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65,
  0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a, 0x65, 0x6e,
  0x64, 0x0a, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x5b, 0x22, 0x6b, 0x65, 0x65,
  0x70, 0x2d, 0x6f, 0x70, 0x65, 0x6e, 0x22, 0x5d, 0x20, 0x3d, 0x20, 0x66,
  0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x73, 0x6f, 0x63, 0x6b,
  0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e,
  0x20, 0x62, 0x61, 0x73, 0x65, 0x2e, 0x73, 0x65, 0x74, 0x6d, 0x65, 0x74,
  0x61, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x28, 0x7b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x67, 0x65, 0x74, 0x66, 0x64, 0x20, 0x3d,
  0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x20,
  0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a,
  0x67, 0x65, 0x74, 0x66, 0x64, 0x28, 0x29, 0x20, 0x65, 0x6e, 0x64, 0x2c,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x72,
  0x74, 0x79, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f,
  0x6e, 0x28, 0x29, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73,
  0x6f, 0x63, 0x6b, 0x3a, 0x64, 0x69, 0x72, 0x74, 0x79, 0x28, 0x29, 0x20,
  0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x2c, 0x20, 0x7b,
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x63,
  0x61, 0x6c, 0x6c, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x73, 0x65, 0x6c, 0x66, 0x2c, 0x20, 0x63, 0x68, 0x75,
  0x6e, 0x6b, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x29, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20,
  0x63, 0x68, 0x75, 0x6e, 0x6b, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x73,
  0x65, 0x6e, 0x64, 0x28, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65,
  0x6c, 0x73, 0x65, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x31,
  0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x0a,
  0x65, 0x6e, 0x64, 0x0a, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x5b, 0x22, 0x64,
  0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x22, 0x5d, 0x20, 0x3d, 0x20, 0x73,
  0x69, 0x6e, 0x6b, 0x74, 0x5b, 0x22, 0x6b, 0x65, 0x65, 0x70, 0x2d, 0x6f,
  0x70, 0x65, 0x6e, 0x22, 0x5d, 0x0a, 0x5f, 0x4d, 0x2e, 0x73, 0x69, 0x6e,
  0x6b, 0x20, 0x3d, 0x20, 0x5f, 0x4d, 0x2e, 0x63, 0x68, 0x6f, 0x6f, 0x73,
  0x65, 0x28, 0x73, 0x69, 0x6e, 0x6b, 0x74, 0x29, 0x0a, 0x73, 0x6f, 0x75,
  0x72, 0x63, 0x65, 0x74, 0x5b, 0x22, 0x62, 0x79, 0x2d, 0x6c, 0x65, 0x6e,
  0x67, 0x74, 0x68, 0x22, 0x5d, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x28, 0x73, 0x6f, 0x63, 0x6b, 0x2c, 0x20, 0x6c,
  0x65, 0x6e, 0x67, 0x74, 0x68, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x62, 0x61, 0x73, 0x65, 0x2e, 0x73,
  0x65, 0x74, 0x6d, 0x65, 0x74, 0x61, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x28,
  0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x67, 0x65,
  0x74, 0x66, 0x64, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x29, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
  0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x67, 0x65, 0x74, 0x66, 0x64, 0x28, 0x29,
  0x20, 0x65, 0x6e, 0x64, 0x2c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x64, 0x69, 0x72, 0x74, 0x79, 0x20, 0x3d, 0x20, 0x66, 0x75,
  0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x20, 0x72, 0x65, 0x74,
  0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x64, 0x69, 0x72,
  0x74, 0x79, 0x28, 0x29, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x7d, 0x2c, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x5f, 0x5f, 0x63, 0x61, 0x6c, 0x6c, 0x20, 0x3d, 0x20, 0x66,
  0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66,
  0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x3c, 0x3d, 0x20, 0x30,
  0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e,
  0x20, 0x6e, 0x69, 0x6c, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63,
  0x61, 0x6c, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x20, 0x3d, 0x20, 0x6d, 0x61,
  0x74, 0x68, 0x2e, 0x6d, 0x69, 0x6e, 0x28, 0x73, 0x6f, 0x63, 0x6b, 0x65,
  0x74, 0x2e, 0x42, 0x4c, 0x4f, 0x43, 0x4b, 0x53, 0x49, 0x5a, 0x45, 0x2c,
  0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x29, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63,
  0x61, 0x6c, 0x20, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x2c, 0x20, 0x65, 0x72,
  0x72, 0x20, 0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x72, 0x65, 0x63,
  0x65, 0x69, 0x76, 0x65, 0x28, 0x73, 0x69, 0x7a, 0x65, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69,
  0x66, 0x20, 0x65, 0x72, 0x72, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6e, 0x69, 0x6c, 0x2c, 0x20, 0x65,
  0x72, 0x72, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74,
  0x68, 0x20, 0x3d, 0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x2d,
  0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x6c, 0x65, 0x6e, 0x28,
  0x63, 0x68, 0x75, 0x6e, 0x6b, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72,
  0x6e, 0x20, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x7d, 0x29, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x74, 0x5b, 0x22, 0x75, 0x6e, 0x74, 0x69, 0x6c, 0x2d, 0x63, 0x6c,
  0x6f, 0x73, 0x65, 0x64, 0x22, 0x5d, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e,
  0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x73, 0x6f, 0x63, 0x6b, 0x29, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x64, 0x6f,
  0x6e, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72,
  0x6e, 0x20, 0x62, 0x61, 0x73, 0x65, 0x2e, 0x73, 0x65, 0x74, 0x6d, 0x65,
  0x74, 0x61, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x28, 0x7b, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x67, 0x65, 0x74, 0x66, 0x64, 0x20,
  0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x6f, 0x63, 0x6b,
  0x3a, 0x67, 0x65, 0x74, 0x66, 0x64, 0x28, 0x29, 0x20, 0x65, 0x6e, 0x64,
  0x2c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69,
  0x72, 0x74, 0x79, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x29, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
  0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x64, 0x69, 0x72, 0x74, 0x79, 0x28, 0x29,
  0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x2c, 0x20,
  0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f,
  0x63, 0x61, 0x6c, 0x6c, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74,
  0x69, 0x6f, 0x6e, 0x28, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x64, 0x6f, 0x6e,
  0x65, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72,
  0x6e, 0x20, 0x6e, 0x69, 0x6c, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f,
  0x63, 0x61, 0x6c, 0x20, 0x63, 0x68, 0x75, 0x6e, 0x6b, 0x2c, 0x20, 0x65,
  0x72, 0x72, 0x2c, 0x20, 0x70, 0x61, 0x72, 0x74, 0x69, 0x61, 0x6c, 0x20,
  0x3d, 0x20, 0x73, 0x6f, 0x63, 0x6b, 0x3a, 0x72, 0x65, 0x63, 0x65, 0x69,
  0x76, 0x65, 0x28, 0x73, 0x6f, 0x63, 0x6b, 0x65, 0x74, 0x2e, 0x42, 0x4c,
  0x4f, 0x43, 0x4b, 0x53, 0x49, 0x5a, 0x45, 0x29, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20,
  0x6e, 0x6f, 0x74, 0x20, 0x65, 0x72, 0x72, 0x20, 0x74, 0x68, 0x65, 0x6e,
  0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x68, 0x75, 0x6e,
  0x6b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x69, 0x66, 0x20, 0x65, 0x72, 0x72,
  0x20, 0x3d, 0x3d, 0x20, 0x22, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x64, 0x22,
  0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x6f,
  0x63, 0x6b, 0x3a, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x28, 0x29, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x64, 0x6f, 0x6e, 0x65, 0x20, 0x3d, 0x20, 0x31, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x70,
  0x61, 0x72, 0x74, 0x69, 0x61, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20,
  0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6e, 0x69, 0x6c, 0x2c, 0x20,
  0x65, 0x72, 0x72, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x7d, 0x29, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x74, 0x5b, 0x22, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x22,
  0x5d, 0x20, 0x3d, 0x20, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x74, 0x5b,
  0x22, 0x75, 0x6e, 0x74, 0x69, 0x6c, 0x2d, 0x63, 0x6c, 0x6f, 0x73, 0x65,
  0x64, 0x22, 0x5d, 0x0a, 0x5f, 0x4d, 0x2e, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x20, 0x3d, 0x20, 0x5f, 0x4d, 0x2e, 0x63, 0x68, 0x6f, 0x6f, 0x73,
  0x65, 0x28, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x74, 0x29, 0x0a, 0x72,
  0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x4d, 0x0a,0x0};
#endif
  return luaL_dostring(L, (const char*)B); 
} /* end of embedded lua code */
