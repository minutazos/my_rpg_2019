/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Check if the enemy can move, we don't want the enemy traspassing the scene :)
*/

#include "my_rpg.h"

int can_wup(sfVector2f *position, scene_t *scene)
{
    int relative_pos = (int)(position->y - 1) % SCENE_HEIGHT;

    if (relative_pos <= 0) {
        return (FALSE);
    }
    return (TRUE);
}

int can_wdown(sfVector2f *position, scene_t *scene)
{
    int relative_pos = (int)(position->y +
                             ENEMY_SPRITE_DIMENSION) % SCENE_HEIGHT;

    if (relative_pos >= SCENE_HEIGHT) {
        return (FALSE);
    }
    return (TRUE);
}

int can_wleft(sfVector2f *position, scene_t *scene)
{
    int relative_pos = (int)(position->x - 1) % SCENE_WIDTH;

    if (relative_pos <= 0) {
        return (FALSE);
    }
    return (TRUE);
}

int can_wright(sfVector2f *position, scene_t *scene)
{
    int relative_pos = (int)(position->x +
                             ENEMY_SPRITE_DIMENSION) % SCENE_WIDTH;

    if (relative_pos >= SCENE_WIDTH) {
        return (FALSE);
    }
    return (TRUE);
}

int can_enemy_move(scene_t *scene, enemy_t *enemy, animation_t direction)
{
    int (*check_direction[4])(sfVector2f *, scene_t *) = {can_wup, can_wdown,
                                                        can_wleft, can_wright};

    return (check_direction[direction](enemy->object->position, scene));
}
