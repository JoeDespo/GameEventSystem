#include <iostream>
#include <string>



int main() {
    GameEngine* engine = GameEngine::getInstance();

    // Trigger game events
    engine->triggerEvent("Enemy appeared!");
    engine->triggerEvent("Treasure found!");

    // Simulate player actions
    engine->playerAction("Player1", "attacks the enemy.");
    engine->playerAction("Player2", "collects the treasure.");
    
    // Another game event and player action
    engine->triggerEvent("Player leveled up!");
    engine->playerAction("Player1", "casts a spell.");

    return 0;
}

/**
 * Expected Output:
 * 
 * [GameEngine] Event Triggered: Enemy appeared!
 * [GameEngine] Event Triggered: Treasure found!
 * [GameEngine] Player1 attacks the enemy.
 * [GameEngine] Player2 collects the treasure.
 * [GameEngine] Event Triggered: Player leveled up!
 * [GameEngine] Player1 casts a spell.
 */