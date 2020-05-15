/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** hdl esc key
*/

#include "my_rpg.h"

void display_pause(environment_t *env)
{
    object_t *pause = create_object(PAUSE_TEXTURE_PATH,
        create_ptr_position(0, 0),
        create_ptr_rect(0, 0, PAUSE_WIDTH, PAUSE_HEIGHT), other);

    if (pause != NULL) {
        display_object(pause, env);
    }
}

int pause_game(environment_t *env)
{
    sfEvent event;
     int pause = 1;

    while (pause) {
        sfRenderWindow_pollEvent(env->window, &event);
        if (event.type == sfEvtKeyPressed &&
            event.key.code == sfKeyEscape) {
            pause = 0;
        }
    }
    env->pause = 0;
    return (0);
}

void hdl_keyboard_esc(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyEscape) {
        env->pause = 1;
    }
}
