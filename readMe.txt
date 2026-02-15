# Expanding Text Dungeon Game

A text-based adventure built for CS150 in C++, demonstrating object-oriented design, data-driven world-building, and modular storytelling.

## Highlights
- C++ game engine with `Character` and `Environment` classes, separated data files (`characters.txt`, `environments.txt`), and a small parser that loads rooms, characters, and exits at runtime.
- Designed to be expanded without recompilation—just drop additional entries into the provided text files (see the format notes below).
- Includes a `gameDemo.cpp` entry point that wires up the world, then drives the loop that accepts typed commands.

## Build & run
1. Ensure a C++ compiler (GCC/Clang/Visual Studio) plus CMake and Make are installed.
2. From the repository root:
   ```sh
   mkdir -p build && cd build
   cmake ..
   make
   ./ExpandingTextDungeonGame
   ```
3. On Windows, the executable will be under `build/` and can be launched directly after building.
4. If you prefer plain Makefiles, `gameDemo.cpp`/#includes compile cleanly with `g++ -std=c++17 *.cpp -o ExpandingTextDungeonGame`.

## Gameplay
- Type directional exits (`north`, `enter fireplace`, `look at chest`) or full commands like `inspect statue`.
- To move, type the exit text exactly as it appears in the environment description (e.g., "fire-place").
- To examine something, use `look at <object>`.
- Add new rooms by editing `environments.txt` and new actors/items via `characters.txt`. Keep each entry separated by blank lines and follow the existing `key: value` pattern.

## Files of note
- `Character.h/.cpp`: Behaviors, stats, and interaction helpers for NPCs and the player.
- `Environment.h/.cpp`: Room data, connected exits, and event hooks.
- `characters.txt` & `environments.txt`: Plain text definitions that the engine loads on startup to seed the world.

## Future work
- Hook up a parser to allow synonyms ("fireplace" vs. "fire-place") and conjugated verbs.
- Track player state (inventory, goals) for longer-form adventures.
- Add automated tests for combat/interactions and a simple AI director for NPC movement.

## Credits
Built alone for CS150, inspired by classic text adventures. Feel free to fork and extend—just keep the structure for data-driven expansion.
