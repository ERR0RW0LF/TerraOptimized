# Multiplayer Planning

## Why Multiplayer?

- Multiplayer adds the ability for realistic scenarios by the players: e.g., economy, countries
- Multiplayer should offer a mix of co-op and Pvp in providing a base for cooperation between players in advancing progression and rebel factions.

## Engine Responsibilities

- **Networking Layer**: Handles low-level communication (sending/receiving data between clients and server).
- **Entity Synchronization**: Provides tools for keeping game objects/entities in sync across clients.
- **World State Management**: Offers ways to serialize and share the world or chunks between players.
- **Input/Action Replication**: Allows player actions to be sent to the server and broadcast to other clients.
- **Session Management**: Handles connecting/disconnecting players, lobby systems, etc.

## Game Responsibilities

- **Gameplay Sync**: Decides what gameplay elements to sync (player position, inventory, world changes, etc).
- **Game Events**: Implements reactions to multiplayer events (joining, leaving, chat, etc).
- **Rules Enforcement**: Ensures the game logic (win/loss, interactions) is consistent.

## Key Questions

- What parts of the engine need multiplayer support?
- Which game systems are affected by networking (movement, inventory, world edits)?
- What can be built singleplayer-only and refactored later, and what must be designed for multiplayer now?
- Will you use dedicated servers, peer-to-peer, or both?

## Stretch Goals

- Voice/text chat
- Modding support for multiplayer
- Cross-platform play

## Resources

- [UNET (Unity Networking) Documentation](https://docs.unity3d.com/Manual/UNet.html)
- [Gaffer on Games - Networked Physics](https://gafferongames.com/)
- [Multiplayer in Godot](https://docs.godotengine.org/en/stable/tutorials/networking/high_level_multiplayer.html)
