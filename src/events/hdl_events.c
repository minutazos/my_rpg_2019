/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** detect and handle events
*/

#include "my_rpg.h"

void analyse_events(environment_t *env)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(env->window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(env->window);
            env->exit_status = 0;
        }
        if (event.type == sfEvtKeyPressed) {
            hdl_keyboard_return(event, env);
            hdl_keyboard_arrows(event, env);
            hdl_keyboard_ctrl(event, env);
            hdl_keyboard_m(event, env);
            hdl_keyboard_esc(event, env);
            hdl_keyboard_a(event, env);
        }
        else {
            env->player->animation = NO_ANIMATION;
        }
    }
}
