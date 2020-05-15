/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Create and charge scenes
*/

#include "my_rpg.h"

sfFloatRect create_float_rect(float left, float top, float width, float height)
{
    sfFloatRect rect;

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return (rect);
}

void display_scene(environment_t *env)
{
    if (env->is_in_menu == FALSE) {
        sfView_setViewport(env->actual_scene->secondary->view,
                           create_float_rect(0, 0, 1, 0.2405));
        sfRenderWindow_setView(env->window, env->actual_scene->secondary->view);
        display_hud(env);
        quest(env);
        sfView_setViewport(env->actual_scene->main->view,
                           create_float_rect(0, 0.2405, 1, 0.7595));
        sfRenderWindow_setView(env->window, env->actual_scene->main->view);
        scroll_scene(env);
        display_game_scene(env);
        if (env->pause) {
            display_pause(env);
            pause_game(env);
        }
    }
    else if (env->is_in_menu == TRUE) {
        display_menu(env);
    }
}
