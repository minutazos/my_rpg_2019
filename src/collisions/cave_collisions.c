/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** collisions for the cave quest
*/

#include "my_rpg.h"

void check_collisions_x(environment_t *env)
{
    if (env->player->object->position->x < 1832) {
        env->player->object->position->x = 1832;
    }
    else if (env->player->object->position->x > 2006) {
        env->player->object->position->x = 2006;
    }
}

void check_collisions_block(environment_t *env)
{
    if (env->player->object->position->y >= 1370) {
        if (env->player->object->position->x >= 1832
            && env->player->object->position->x <= 1905) {
            env->player->object->position->y = 1370;
        }
        else if (env->player->object->position->x >= 1932
                 && env->player->object->position->x <= 2006) {
            env->player->object->position->y = 1370;
        }
    }
}

void check_collisions_y(environment_t *env)
{
    if (env->player->object->position->y < 1312)
        env->player->object->position->y = 1312;
    if (env->player->object->position->y > 1400) {
        env->is_in_cave = FALSE;
        env->player->object->position->y = 1268;
        env->player->object->position->x = 1858;
    }
    check_collisions_x(env);
    check_collisions_block(env);
}
