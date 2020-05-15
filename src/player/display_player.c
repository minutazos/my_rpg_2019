/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display player
*/

#include "my_rpg.h"

void display_player(environment_t *env)
{
    check_player_animation(env->player);
    display_object(env->player->object, env);
}
