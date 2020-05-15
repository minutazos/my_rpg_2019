/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** give bomb to player
*/

#include "my_rpg.h"

void get_bombs(player_t *player, int nb_bombs)
{
    player->inventory.weapon[SLOT_BOMB] = bomb;
    player->inventory.nb_bombs += nb_bombs;
}
