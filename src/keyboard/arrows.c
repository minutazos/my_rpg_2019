/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Handle Keyboard Arrows
*/

#include "my_rpg.h"

void hdl_key_right(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyRight) {
        env->last_key = RIGHT;
        env->player->animation = WALKING_RIGHT;
        if (check_movement(env->actual_scene->main->colliders,
                            env->player->object->position,
                            PLAYER_C,
                            WALKING_RIGHT) ||
            env->is_in_cave == TRUE)
            move_player(env, 1, 0);
    }
}

void hdl_key_left(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyLeft) {
        env->last_key = LEFT;
        env->player->animation = WALKING_LEFT;
        if (check_movement(env->actual_scene->main->colliders,
                            env->player->object->position,
                            PLAYER_C,
                            WALKING_LEFT) ||
            env->is_in_cave == TRUE)
            move_player(env, -1, 0);
    }
}

void hdl_key_up(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyUp) {
        env->last_key = UP;
        env->player->animation = WALKING_UP;
        if (check_movement(env->actual_scene->main->colliders,
                            env->player->object->position,
                            PLAYER_C,
                            WALKING_UP) ||
            env->is_in_cave == TRUE)
            move_player(env, 0, -1);
    }
}

void hdl_key_down(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyDown) {
        env->last_key = DOWN;
        env->player->animation = WALKING_DOWN;
        if (check_movement(env->actual_scene->main->colliders,
                            env->player->object->position,
                            PLAYER_C,
                            WALKING_DOWN) ||
            env->is_in_cave == TRUE)
            move_player(env, 0, 1);
    }
}

void hdl_keyboard_arrows(sfEvent event, environment_t *env)
{
    if (env->is_in_menu == FALSE) {
        hdl_key_right(event, env);
        hdl_key_left(event, env);
        hdl_key_up(event, env);
        hdl_key_down(event, env);
    }
}
