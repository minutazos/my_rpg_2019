/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** pick up sword
*/

#include "my_rpg.h"

void pick_up_sword_animation(player_t *player)
{
    change_rect_y_pos(player->object, 28);
    change_rect_x_pos(player->object, 483);
    change_rect_width(player->object, 42);
    change_rect_height(player->object, 74);
}
