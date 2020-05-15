/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** hdl return key
*/

#include "my_rpg.h"

void hdl_keyboard_return(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyEnter) {
        if (env->is_in_menu == TRUE) {
            env->is_in_menu = FALSE;
            env->actual_scene = create_map_scene(env);
        }
    }
}
