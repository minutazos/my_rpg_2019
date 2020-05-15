/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Free enemy pointer
*/

#include "my_rpg.h"

void destroy_enemies(enemy_t **enemies)
{
    for (int i = 0; enemies[i] != NULL; ++i) {
        destroy_enemy(enemies[i]);
    }
    free(enemies);
}

void destroy_enemy_from_array(enemy_t **enemies, int nbr)
{
    destroy_enemy(enemies[nbr]);
    for (nbr; enemies[nbr]; ++nbr) {
        enemies[nbr] = enemies[nbr + 1];
    }
}

void destroy_enemy(enemy_t *enemy)
{
    destroy_object(enemy->object);
    free(enemy);
}
