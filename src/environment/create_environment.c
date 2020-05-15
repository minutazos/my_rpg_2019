/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create environment
*/

#include "my_rpg.h"

void create_environment_2(environment_t *env, unsigned int window_height,
                          unsigned int window_width)
{
    sfVideoMode mode = {window_width, window_height + 140, BITS_PER_PIXEL};

    env->window = sfRenderWindow_create(mode, "The Legend of Zelda",
                                        sfClose | sfResize, NULL);
    //env->actual_scene = create_map_scene(env);
    env->player = create_player();
    env->hud = create_hud(env->player);
    env->is_in_about = FALSE;
}

environment_t *create_environment(unsigned int window_height,
                                  unsigned int window_width)
{
    environment_t *env = malloc(sizeof(environment_t));

    if (env == NULL) {
        return (NULL);
    }
    env->exit_status = -1;
    env->window_width = window_width;
    env->window_height = window_height;
    env->menu = create_title_screen();
    env->cave = create_cave();
    env->is_in_menu = TRUE;
    env->is_in_cave = FALSE;
    env->last_key = NONE;
    play_audio_source(env, THEME_MUSIC_PATH, TRUE);
    create_environment_2(env, window_height, window_width);
    return (env);
}
