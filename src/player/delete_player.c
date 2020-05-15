/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** initiate player and give all values to stucture
*/

#include "my_rpg.h"

void destroy_player(player_t *player)
{
    destroy_object(player->object);
    free(player);
}
