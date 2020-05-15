/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Display Menu
*/

#include "my_rpg.h"

void display_menu(environment_t *env)
{
    if (env->is_in_about == FALSE)
        animate_object(env->menu, TITLE_SCREEN_WIDTH,
                       0, TITLE_SCREEN_WIDTH * 5);
    display_object(env->menu, env);
}
