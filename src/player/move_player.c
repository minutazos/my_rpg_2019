/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** move player
*/

#include "my_rpg.h"


void move_player(environment_t *env, int x_add, int y_add)
{
//    printf("%f\t%f\n", env->player->object->position->x, env->player->object->position->y);
    if (check_collision_with_enemies(env->player,
                                     env->actual_scene->enemies)) {
        env->player->object->position->x -= x_add * 20;
        env->player->object->position->y -= y_add * 20;
        lose_life(env->player, 1);
    }
    else {
        env->player->object->position->x += x_add * SPEED;
        env->player->object->position->y += y_add * SPEED;
    }
}
