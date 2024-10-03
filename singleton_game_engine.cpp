#include <iostream>
#include <string>

class GameEngine
{
    private:
    static GameEngine* instance; //Holds the only instance

    GameEngine()
    {
        std::cout << "GameEngine created!" << std::endl;
    }

    public:
    //This method gives access to the instance
    static GameEngine* getInstance()
    {
        if (!instance)
        {
            std::cout << "Creating a GameEngine instance" << std::endl;
            instance = new GameEngine();
        }
        else
        {
            std::cout << "Returning existing instance of GameEngine..." << std::endl;
        }
        return instance;
    }

    //Notify player the new game event
    void triggerEvent(const std::string& event)
    {
        std::cout << "[GameEngine] Event Triggered: " << event << std::endl;
    }

    //Notify player on player actions
    void playerAction(const std::string& player, const std::string& action)
    {
        std::cout << "[GameEngine] " << player << " " << action << std::endl;
    }

};

// Initialize the static instance variable to nullptr
GameEngine* GameEngine::instance = nullptr;


int main()
{
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
