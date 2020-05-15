/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** destroy object
*/

#include "my_rpg.h"

void destroy_object(object_t *object)
{
    sfSprite_destroy(object->sprite);
    sfTexture_destroy(object->texture);
    free(object->rect);
    free(object->position);
    free(object);
}
