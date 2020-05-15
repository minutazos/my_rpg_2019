/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Scroll scene if player is not on screen
*/

#include "my_rpg.h"

void scroll_scene_2(environment_t *env)
{
    float y = env->player->object->position->y;

    if (y <= env->actual_scene->main->rect->top) {
        sfView_move(env->actual_scene->main->view,
                    create_position(0, -SCENE_HEIGHT));
        env->actual_scene->main->rect->top -= SCENE_HEIGHT;
    }
    if (y >= env->actual_scene->main->rect->top +
        env->actual_scene->main->rect->height) {
        sfView_move(env->actual_scene->main->view,
                    create_position(0, SCENE_HEIGHT));
        env->actual_scene->main->rect->top += SCENE_HEIGHT;
    }
}

void scroll_scene(environment_t *env)
{
    float x = env->player->object->position->x;

    if (x >= env->actual_scene->main->rect->left +
        env->actual_scene->main->rect->width) {
        sfView_move(env->actual_scene->main->view,
                    create_position(SCENE_WIDTH, 0));
        env->actual_scene->main->rect->left += SCENE_WIDTH;
    }
    if (x <= env->actual_scene->main->rect->left) {
        sfView_move(env->actual_scene->main->view,
                    create_position(-SCENE_WIDTH, 0));
        env->actual_scene->main->rect->left -= SCENE_WIDTH;
    }
    scroll_scene_2(env);
}
