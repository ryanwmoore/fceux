#include "lua-compatibility.h"
#include "lauxlib.h"

#if LUA_VERSION_NUM >= 502

/* This implementation of lual_typerror is pasted from lua-5.1.5. Discontinued
 * in 5.2 and on. Lua is released under the MIT License.
 *
 * See:
 *      http://www.lua.org/license.html
 *      http://www.opensource.org/licenses/mit-license.html
 */
int luaL_typerror(lua_State *L, int narg, const char *tname)
{
  const char *msg = lua_pushfstring(L, "%s expected, got %s",
                                    tname, lua_typename(L, narg));
  return luaL_argerror(L, narg, msg);
}

int lua_resume(lua_State *L, int narg)
{
    return lua_resume(L, NULL, narg);
}

#endif
