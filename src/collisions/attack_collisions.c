/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Attack collisions
*/

#include "my_rpg.h"


int check_collision(object_t *object1, object_t *object2)
{
    int obj1x = object1->position->x;
    int obj1y = object1->position->y;
    int obj2x = object2->position->x;
    int obj2y = object2->position->y;
    int obj1w = object1->rect->width *  PLAYER_SCALE_X;
    int obj1h = object1->rect->height * PLAYER_SCALE_Y;
    int obj2w = object2->rect->width;
    int obj2h = object2->rect->height;

    if (obj1x < obj2x + obj2w && obj1x + obj1w > obj2x &&
        obj1y < obj2y + obj2h && obj1y + obj1h > obj2y) {
        return (TRUE);
    }
    return (FALSE);
}

int check_collision_with_enemies(player_t *player, enemy_t **enemies)
{
    int i = 0;

    while (enemies[i]) {
        if (check_collision(player->object, enemies[i]->object)) {
            return (TRUE);
        }
        i++;
    }
    return (FALSE);
}

int check_attack(object_t *object1, object_t *object2, sfVector2f *direction)
{
    int obj1x = object1->position->x + direction->x;
    int obj1y = object1->position->y + direction->y;
    int obj2x = object2->position->x;
    int obj2y = object2->position->y;
    int obj1w = object1->rect->width * PLAYER_SCALE_X;
    int obj1h = object1->rect->height * PLAYER_SCALE_Y;
    int obj2w = object2->rect->width;
    int obj2h = object2->rect->height;

    if (obj1x < obj2x + obj2w && obj1x + obj1w > obj2x &&
        obj1y < obj2y + obj2h && obj1y + obj1h > obj2y) {
        return (TRUE);
    }
    return (FALSE);
}

int check_collision_attack(environment_t *env, sfVector2f *direction)
{
    int i = 0;

    while (env->actual_scene->enemies[i]) {
        if (check_attack(env->player->object,
                         env->actual_scene->enemies[i]->object,  direction)) {
            return (i);
        }
        i++;
    }
    return (-1);
}
