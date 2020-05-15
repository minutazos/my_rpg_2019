/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create the hud in a new window
*/

#include "hud.h"
#include <string.h>
#include <stdlib.h>

t_hud *create_hud(player_t *player)
{
    t_hud *hud = malloc(sizeof(t_hud));

    if (hud == NULL) {
        return (NULL);
    }
    hud->background = create_object(HUD_BACKGROUND_SPRITE,
                                    create_ptr_position(0, 0),
                                    create_ptr_rect(0, 0, HUD_WIDTH,
                                                    HUD_HEIGHT), other);
    hud->weapon = malloc(sizeof(object_t *) * 2);
    hud->weapon[SLOT_BOMB] = NULL;
    hud->weapon[SLOT_SWORD] = NULL;
    hud->gems = player->gems;
    hud->keys = PLAYER_KEYS;
    hud->bombs = player->inventory.nb_bombs;
    hud->life = init_life(player);
    if (hud->background == NULL || hud->life == NULL || hud->weapon == NULL) {
        return (NULL);
    }
    return (hud);
}
