/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** hdl return key
*/

#include "my_rpg.h"

void get_attack_animation_1(environment_t *env)
{
    int collision;

    if (env->last_key == UP) {
        env->player->animation = ATTACK_UP;
        collision = check_collision_attack(env, create_ptr_position(0, -5));
        if (collision != -1) {
            env->player->nbr_of_kills += 1;
            env->actual_scene->enemies[collision]->life.life -= 1;
            move_enemy(env->actual_scene->enemies[collision], 0, -20);
        }
    }
    else if (env->last_key == DOWN) {
        env->player->animation = ATTACK_DOWN;
        collision = check_collision_attack(env, create_ptr_position(0, 5));
        if (collision != -1) {
            env->player->nbr_of_kills += 1;
            env->actual_scene->enemies[collision]->life.life -= 1;
            move_enemy(env->actual_scene->enemies[collision], 0, 20);
        }
    }
}

void get_attack_animation_2(environment_t *env)
{
    int collision;

    if (env->last_key == LEFT) {
        env->player->animation = ATTACK_LEFT;
        collision = check_collision_attack(env, create_ptr_position(-5, 0));
        if (collision != -1) {
            env->player->nbr_of_kills += 1;
            env->actual_scene->enemies[collision]->life.life -= 1;
            move_enemy(env->actual_scene->enemies[collision], -20, 0);
        }
    }
    else if (env->last_key == RIGHT) {
        env->player->animation = ATTACK_RIGHT;
        collision = check_collision_attack(env, create_ptr_position(0, 5));
        if (collision != -1) {
            env->player->nbr_of_kills += 1;
            env->actual_scene->enemies[collision]->life.life -= 1;
            move_enemy(env->actual_scene->enemies[collision], 20, 0);
        }
    }
}

void hdl_keyboard_ctrl(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyLControl) {
        if (env->player->inventory.weapon[SLOT_SWORD] != none) {
                get_attack_animation_1(env);
                get_attack_animation_2(env);
        }
    }
}
