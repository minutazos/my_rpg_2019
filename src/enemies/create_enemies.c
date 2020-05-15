/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** instantiate desired number of enemies
*/

#include "my_rpg.h"

enemy_t **create_enemies_debug(void)
{
    enemy_t **enemies = malloc(sizeof(enemy_t *) * (2));

    if (enemies == NULL) {
        return (NULL);
    }
    enemies[0] = create_red_octorok_atbeg();
    enemies[1] = NULL;
    return (enemies);
}

enemy_t **create_enemies(int num_enemies)
{
    enemy_t **enemies = malloc(sizeof(enemy_t *) * (num_enemies + 1));

    if (enemies == NULL) {
        return (NULL);
    }
    for (int i = 0; i < num_enemies; ++i) {
        enemies[i] = create_enemy(rand() % 2 + 2);
    }
    enemies[num_enemies] = NULL;
    return (enemies);
}
