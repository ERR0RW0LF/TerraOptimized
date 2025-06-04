# Protocols

This file outlines the different protocols that will be used in the engine and game. It includes the loader protocol, module protocol, and game protocol.

## Loader Protocol

The loader protocol defines how the loader interacts with the engine and game. It is responsible for managing processes, the used modules, and the communication between the loader and the engine/game.
The loader protocol includes the following components:

- Module management: The loader is responsible for telling the engine which modules to load and unload.
- Error handling: The loader must handle errors that occur during the loading and unloading of modules, as well as during communication between the engine and the game.
- Debugging: The loader should provide debugging capabilities to the developer, allowing them to inspect the state of the engine and game, and to modify the behavior of the engine and game during development.

## Engine Game Protocol

The engine game protocol defines how the engine and game communicate with each other. It is responsible for managing the flow of information between the two, as well as handling any requests or commands that the game may send to the engine.
The engine game protocol includes the following components:

- Communication: The engine and game must be able to communicate with each other in a clear and efficient manner.
- Event handling: The engine must be able to handle events that are triggered by the game, such as user input or game state changes.
- Data management: The engine must be able to manage the data that is shared between the game and the engine, such as game objects, assets, and configurations.
