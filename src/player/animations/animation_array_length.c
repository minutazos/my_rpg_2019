/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** get animation_t array number of elts
*/

#include "my_rpg.h"

int animations_array_length(animation_t *animations)
{
    int len = 0;

    for (; animations[len]; len++);
    return (len);
}
