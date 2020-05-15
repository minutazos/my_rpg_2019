/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create the hud in a new window
*/

#include "hud.h"

void update_hud(environment_t *env)
{
    free_hud(env->hud);
    env->hud = create_hud(env->player);
    update_weapon(env->player, env->hud);
}