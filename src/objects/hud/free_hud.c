/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** free all hud resources
*/

#include "hud.h"

void free_hud(t_hud *hud)
{
    destroy_object(hud->background);
    if (hud->weapon[0] != NULL) {
        destroy_object(hud->weapon[0]);
    }
    if (hud->weapon[1] != NULL) {
        destroy_object(hud->weapon[1]);
    }
    for (int i = 0; hud->life->full_life[i]; i++) {
        destroy_object(hud->life->full_life[i]);
    }
    free(hud->life);
    free(hud);
}