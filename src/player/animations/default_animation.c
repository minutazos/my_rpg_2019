/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Default Player Animation
*/

#include "my_rpg.h"

void default_animation_1(player_t *player)
{
    if (player->animation == WALKING_DOWN) {
        change_rect_y_pos(player->object, 0);
        change_rect_x_pos(player->object, 0);
    }
}

void default_animation_2(player_t *player)
{
    if (player->animation == WALKING_UP) {
        change_rect_y_pos(player->object, 0);
        change_rect_x_pos(player->object, 300);
    }
}

void default_animation_3(player_t *player)
{
    if (player->animation == WALKING_LEFT) {
        change_rect_y_pos(player->object, 54);
        change_rect_x_pos(player->object, 207);
    }
}

void default_animation_4(player_t *player)
{
    if (player->animation == WALKING_RIGHT) {
        change_rect_y_pos(player->object, 54);
        change_rect_x_pos(player->object, 99);
    }
}

void default_animation(player_t *player)
{
    default_animation_1(player);
    default_animation_2(player);
    default_animation_3(player);
    default_animation_4(player);
}
