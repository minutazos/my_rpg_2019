/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** destroy map_scene
*/

#include "my_rpg.h"

void destroy_map_scene(environment_t *env)
{
    sfView_destroy(env->actual_scene->main->view);
    free(env->actual_scene->main->rect);
    free(env->actual_scene->main->texture);
    free(env->actual_scene->main);
    free(env->actual_scene);
}
