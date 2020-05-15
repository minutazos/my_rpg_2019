/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** lose life
*/

#include "my_rpg.h"

void lose_life(player_t *player, int life)
{
    int i = 0;

    while ((i < life) && (player->life.life > 0)) {
        player->life.life -= 1;
        i++;
    }
    if (player->life.life == 0) {
        player->life.state = dead;
    }
}
