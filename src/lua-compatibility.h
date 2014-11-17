#include "types.h"
#include "fceulua.h"

// If Lua 5.2 or later, add some compatibility functions.

extern "C" {
    #include <lua.h>
#if LUA_VERSION_NUM >= 502
    #include <lauxlib.h>
#endif
}

#if LUA_VERSION_NUM >= 502

/* Discontinued in Lua 5.2 and beyond. */
int luaL_typerror (lua_State *L, int narg, const char *tname);

/* From the Lua changelog: "Function lua_resume has an extra parameter, from.
 * Pass NULL or the thread doing the call." In this implementation, we simply
 * pass in NULL.
 */
int lua_resume(lua_State *L, int narg);

#define lua_open luaL_newstate
#define luaL_reg luaL_Reg

#else

//No compatibility functions or helpers needed.

#endif
