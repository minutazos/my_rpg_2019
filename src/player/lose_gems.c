/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** lose gems
*/

#include "my_rpg.h"

void lose_gems(player_t *player, int gems)
{
    player->gems -= gems;
}
