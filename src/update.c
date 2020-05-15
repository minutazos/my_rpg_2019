/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** the update function is called each frame
*/

#include "my_rpg.h"

void main_loop(environment_t *env)
{
    while (sfRenderWindow_isOpen(env->window) && env->exit_status == -1)
    {
        analyse_events(env);
        framerate_independent_loop(env);
        if (env->player->life.state == dead) {
            env->exit_status = 0;
        }
    }
}

int start_update(int active, float seconds, environment_t *env)
{
    if (env->is_in_menu == TRUE) {
        if (seconds > FRAMERATE * 3) {
            update(env);
            active = 0;
        }
    }
    else if (seconds > FRAMERATE / 2) {
        update(env);
        active = 0;
    }
    return (active);
}

void framerate_independent_loop(environment_t *env)
{
    sfTime time;
    float seconds;
    int active = 1;
    sfClock *clock;

    clock = sfClock_create();
    while (active == 1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        active = start_update(active, seconds, env);
    }
    sfClock_destroy(clock);
}

void update(environment_t *env)
{
    sfRenderWindow_clear(env->window, sfBlack);
    if (env->is_in_menu == FALSE) {
        move_enemies(env->actual_scene);
    }
    display_scene(env);
    sfRenderWindow_display(env->window);
}
