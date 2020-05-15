/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** animate sprite
*/

#include "my_rpg.h"

void move_rect(object_t *object, int offset, int min_value, int max_value)
{
    object->rect->left += offset;
    if (object->rect->left == max_value) {
        object->rect->left = min_value;
    }
}

void animate_object(object_t *object, int offset, int min_value, int max_value)
{
    move_rect(object, offset, min_value, max_value);
}


