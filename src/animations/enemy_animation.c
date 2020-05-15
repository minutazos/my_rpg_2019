/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Default Octorok Animation
*/

#include "my_rpg.h"

void default_enemy_animation_1(enemy_t *enemy)
{
    if (enemy->animation == WALKING_DOWN) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 0);
    }
}

void default_enemy_animation_2(enemy_t *enemy)
{
    if (enemy->animation == WALKING_UP) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 64);
    }
}

void default_enemy_animation_3(enemy_t *enemy)
{
    if (enemy->animation == WALKING_LEFT) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 32);
    }
}

void default_enemy_animation_4(enemy_t *enemy)
{
    if (enemy->animation == WALKING_RIGHT) {
        change_rect_y_pos(enemy->object, 0);
        change_rect_x_pos(enemy->object, 96);
    }
}

void enemy_animation(enemy_t *enemy)
{
    default_enemy_animation_1(enemy);
    default_enemy_animation_2(enemy);
    default_enemy_animation_3(enemy);
    default_enemy_animation_4(enemy);
}
