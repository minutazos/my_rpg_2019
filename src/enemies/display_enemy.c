/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** display enemy
*/

#include "my_rpg.h"

void display_enemies(environment_t *env)
{
    for (int i = 0; env->actual_scene->enemies[i] != NULL; ++i) {
        display_enemy(env->actual_scene->enemies[i], env);
    }
}

void display_enemy(enemy_t *enemy, environment_t *env)
{
    check_enemy_animation(enemy);
    display_object(enemy->object, env);
}
