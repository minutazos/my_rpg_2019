/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** check if it's the first frame of the animation or not
*/

#include "my_rpg.h"

int is_first_frame(object_t *object, int min_value, int max_value)
{
    if (object->rect->left < min_value || object->rect->left > max_value ) {
        return (TRUE);
    }
    return (FALSE);
}
