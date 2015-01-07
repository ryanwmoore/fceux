FCEUX
=====

This is my personal branch of FCEUX, an NES/Famicom emulator. FCEUX is released
under the GPL license and is available from http://www.fceux.com/ and/or
http://sourceforge.net/projects/fceultra/

I have a few goals with this branch:

1. Better code quality
2. Emscripten support
3. Additional scripting features
4. Better performance

I’ve made several commits to improve code quality, remove warnings, etc. I’ve
added support for Lua 5.2 and Emscripten. There’s still more to be done.

Emscripten support was done by me a while ago as a WIP/hack. I’m now going back
and doing it more properly/cleanly. This’ll allow you to run FCEUX in your
browser at almost-native speeds. For a WIP demo, visit:
http://ryanwmoore.github.io/fceux
