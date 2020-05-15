/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** enemy animations
*/

#include "my_rpg.h"

void enemy_wdown(enemy_t *enemy)
{
    if (is_first_frame(enemy->object, 0, 32)) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 0);
    }
    animate_object(enemy->object, ENEMY_SPRITE_DIMENSION, 0, 32);
}

void enemy_wup(enemy_t *enemy)
{
    if (is_first_frame(enemy->object, 64, 96)) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 64);
    }

    animate_object(enemy->object, ENEMY_SPRITE_DIMENSION, 64, 96);
}

void enemy_wleft(enemy_t *enemy)
{
    if (is_first_frame(enemy->object, 32, 64)) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 32);
    }
    animate_object(enemy->object, ENEMY_SPRITE_DIMENSION, 32, 64);
}

void enemy_wright(enemy_t *enemy)
{
    if (is_first_frame(enemy->object, 96, 128)) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 96);
    }
    animate_object(enemy->object, ENEMY_SPRITE_DIMENSION, 96, 128);
}
