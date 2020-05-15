/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** free environment obj
*/

#include "my_rpg.h"

void destroy_environment(environment_t *env)
{
    destroy_player(env->player);
    destroy_object(env->menu);
    destroy_object(env->cave);
    destroy_audio_source(env);
    free_hud(env->hud);
    sfRenderWindow_destroy(env->window);
    free(env);
}
