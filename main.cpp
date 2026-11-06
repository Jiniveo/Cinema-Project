#include <iostream>
#include "PlayerModule.h" // We only include the .h file!

int main() {
    // Create a player using the struct from the PlayerModule
    Player player1;
    player1.health = 100;
    player1.shield = 50;

    std::cout << "--- Game Start ---\n";
    std::cout << "Initial Health: " << player1.health << ", Shield: " << player1.shield << "\n\n";

    // Simulate taking an attack of 70 damage
    std::cout << "-> Player gets hit for 70 damage!\n";
    takeDamage(player1, 70);

    std::cout << "Current Health: " << player1.health << ", Shield: " << player1.shield << "\n";
    std::cout << "------------------\n";

    return 0;
}
