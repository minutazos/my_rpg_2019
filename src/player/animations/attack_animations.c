/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Player attack animations
*/

#include "my_rpg.h"

void attack_up_animation(player_t *player)
{
    change_rect_y_pos(player->object, 0);
    change_rect_x_pos(player->object, 384);
    change_rect_width(player->object, 48);
    change_rect_height(player->object, 56);
}

void attack_down_animation(player_t *player)
{
    change_rect_y_pos(player->object, 0);
    change_rect_x_pos(player->object, 96);
    change_rect_width(player->object, 48);
    change_rect_height(player->object, 52);
}

void attack_left_animation(player_t *player)
{
    change_rect_y_pos(player->object, 55);
    change_rect_x_pos(player->object, 368);
    change_rect_width(player->object, 52);
    change_rect_height(player->object, 47);
}

void attack_right_animation(player_t *player)
{
    change_rect_y_pos(player->object, 57);
    change_rect_x_pos(player->object, 311);
    change_rect_width(player->object, 52);
    change_rect_height(player->object, 45);
}
