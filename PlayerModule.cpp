#include "PlayerModule.h"

// The actual logic for damaging the player
void takeDamage(Player& player, int damageAmount) {
    int remainingDamage = damageAmount - player.shield;
    
    // If damage breaks through the shield, lower the health
    if (remainingDamage > 0) {
        player.health -= remainingDamage;
        player.shield = 0;
    } else {
        // Shield absorbed all damage
        player.shield -= damageAmount;
    }

    // Don't let health drop below zero
    if (player.health < 0) {
        player.health = 0;
    }
}
