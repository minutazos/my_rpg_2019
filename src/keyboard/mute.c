/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** mute
*/

#include "my_rpg.h"

void hdl_keyboard_m(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyM) {
        if (sfMusic_getStatus(env->audio_source) == sfPlaying) {
            sfMusic_stop(env->audio_source);
        }
        else {
            sfMusic_play(env->audio_source);
        }
    }
}
