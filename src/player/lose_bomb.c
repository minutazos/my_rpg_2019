/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** lose bombs
*/

#include "my_rpg.h"

void lose_bombs(player_t *player, int bombs)
{
    int i = 0;

    while ((i < bombs) && (player->inventory.nb_bombs > 0)) {
        player->inventory.nb_bombs -= 1;
        i++;
    }
    if (player->inventory.nb_bombs == 0) {
        player->inventory.weapon[SLOT_BOMB] = none;
    }
}
