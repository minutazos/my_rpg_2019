/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** life on hud corresponds to the player life
*/

#include "hud.h"

t_hud_life *init_life(player_t *player)
{
    t_hud_life *life = malloc(sizeof(t_hud_life));

    if (life == NULL)
        return (NULL);
    life->full_life = malloc(sizeof(object_t *) * ((player->life.life) + 1));
    if (life->full_life == NULL)
        return (NULL);
    for (int i = 0; i < player->life.life; i++) {
        life->full_life[i] = create_object(LIFE_SPRITE,
                                           create_ptr_position
                                           (455 + (i * (WIDTH_LIFE + 15)), 80),
                                           create_ptr_rect(0, 0, WIDTH_LIFE,
                                                           HEIGHT_LIFE), other);
        if (life->full_life[i] == NULL) {
            return (NULL);
        }
    }
    life->full_life[player->life.life] = NULL;
    return (life);
}
