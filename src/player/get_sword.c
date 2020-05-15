/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** add sword to invetory
*/

#include "my_rpg.h"

void get_sword(player_t *player, weapon_t sword)
{
    player->inventory.weapon[SLOT_SWORD] = sword;
}
