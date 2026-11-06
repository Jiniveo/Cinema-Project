#pragma once

// A simple structure to represent a player
struct Player {
    int health;
    int shield;
};

// A function declaration to damage the player
void takeDamage(Player& player, int damageAmount);
