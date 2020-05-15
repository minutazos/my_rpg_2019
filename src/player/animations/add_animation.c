/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** add animation to animation_t array
*/

#include "my_rpg.h"

void add_animation(animation_t *animations, animation_t animation)
{
    int y = 0;

    if (animations == NULL) {
        return;
    }
    y = animations_array_length(animations);
    if (animations[y] == 0){
        animations[y] = animation;
        y++;
    }
    animations[y] = 0;
}
