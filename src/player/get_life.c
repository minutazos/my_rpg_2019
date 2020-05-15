/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** add more life
*/

#include "my_rpg.h"

void get_life(player_t *player, int life)
{
    int i = 0;

    while ((i < life) && (player->life.life < player->life.max_life)) {
        player->life.life += 1;
        i++;
    }
}
