/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Player walking animations
*/

#include "my_rpg.h"

void walking_down_animation(player_t *player)
{
    if (is_first_frame(player->object, 0, 90)) {
        change_rect_y_pos(player->object, 0);
        change_rect_x_pos(player->object, 0);
        change_rect_width(player->object, 45);
        change_rect_height(player->object, 48);
    }
    animate_object(player->object, 45, 0, 90);
}

void walking_up_animation(player_t *player)
{
    if (is_first_frame(player->object, 300, 384)) {
        change_rect_y_pos(player->object, 0);
        change_rect_x_pos(player->object, 300);
        change_rect_width(player->object, 36);
        change_rect_height(player->object, 48);
    }

    animate_object(player->object, 42, 300, 384);
}

void walking_left_animation(player_t *player)
{
    if (is_first_frame(player->object, 207, 309)) {
        change_rect_y_pos(player->object, 54);
        change_rect_x_pos(player->object, 207);
        change_rect_width(player->object, 48);
        change_rect_height(player->object, 48);
    }
    animate_object(player->object, 51, 207, 309);
}

void walking_right_animation(player_t *player)
{
    if (is_first_frame(player->object, 99, 207)) {
        change_rect_y_pos(player->object, 54);
        change_rect_x_pos(player->object, 99);
        change_rect_width(player->object, 48);
        change_rect_height(player->object, 48);
    }
    animate_object(player->object, 54, 99, 207);
}
