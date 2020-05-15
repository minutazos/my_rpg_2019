/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display game scene
*/

#include "my_rpg.h"

void destroy_to_display(object_t *to_display)
{
    sfSprite_destroy(to_display->sprite);
    sfTexture_destroy(to_display->texture);
    free(to_display);
}

void display_game_scene(environment_t *env)
{
    object_t *to_display;
    sfVector2f pos = create_position(0, 0);
    sfIntRect rect = create_rect(0, 0, INITIAL_VIEW_WIDTH, INITIAL_VIEW_HEIGHT);

    to_display = create_object(env->actual_scene->main->texture,
                               &pos, &rect, screen);
    sfSprite_setTextureRect(to_display->sprite, *to_display->rect);
    sfSprite_setPosition(to_display->sprite, *to_display->position);
    display_object(to_display, env);
    if (env->is_in_cave == FALSE) {
        check_cave(env);
    }
    if (env->is_in_cave == TRUE) {
        cave(env);
    }
    display_enemies(env);
    display_player(env);
    destroy_to_display(to_display);
}
