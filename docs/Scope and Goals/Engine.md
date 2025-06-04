# Engine

This file describes how the engine will work, the structure of the engine, the engine design and why specific chooses were maid.

## Word definitions

| Word | Definition |
|------|------------|
| module | part of the engine which is interchangeable |

## Short breakdown

- the engine should be kept modular so that it is easy to change specific functionality and or apis: e.g., replacing OpenGL later on with Vulkan or making them interchangeable
- defining a universal protocol for modules
- defining a universal protocol for communications between the engine and the game: e.g., the game needs to be able to give the engine infos about what should be rendered and when and what sound should be played, stopped, etc.
- providing a list of all required and optional modules
- what the game is allowed to modify in the engine


