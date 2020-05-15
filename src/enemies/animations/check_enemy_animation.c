/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** function pointer array to call the octorok animation function
*/

#include "my_rpg.h"

animation_t *initialize_enemy_animations(void)
{
    animation_t *animations = malloc(sizeof(animation_t)
                                     * (ENEMY_NBR_ANIMATIONS + 1));

    if (animations == NULL) {
        return (NULL);
    }
    animations[0] = 0;
    add_animation(animations, NO_ANIMATION);
    add_animation(animations, WALKING_UP);
    add_animation(animations, WALKING_DOWN);
    add_animation(animations, WALKING_LEFT);
    add_animation(animations, WALKING_RIGHT);
    animations[ENEMY_NBR_ANIMATIONS] = 0;
    return (animations);
}

void check_enemy_animation(enemy_t *enemy)
{
    int i = 0;
    void(*functions[6])(enemy_t *) = {enemy_animation, enemy_wup, enemy_wdown,
                                enemy_wleft, enemy_wright, 0};
    animation_t *animations = initialize_enemy_animations();

    while (animations[i] != 0) {
        if (animations[i] == enemy->animation) {
            functions[i](enemy);
            break;
        }
        i++;
    }
    free(animations);
}
