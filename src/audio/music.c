/*
** EPITECH PROJECT, 2020
** Alvaro Garcia bamala
** File description:
** audio related functions
*/

#include "my_rpg.h"

void destroy_audio_source(environment_t *env)
{
    if (sfMusic_getStatus(env->audio_source) == sfPlaying) {
        sfMusic_stop(env->audio_source);
    }
    sfMusic_destroy(env->audio_source);
}

void play_audio_source(environment_t *env, const char *filepath, int loop)
{
    env->audio_source = sfMusic_createFromFile(filepath);

    if (loop == TRUE) {
        sfMusic_setLoop(env->audio_source, sfTrue);
    }
    else {
        sfMusic_setLoop(env->audio_source, sfFalse);
    }
    sfMusic_play(env->audio_source);
}
