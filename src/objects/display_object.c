/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display object
*/

#include "my_rpg.h"

void display_object(object_t *object, environment_t *env)
{
    sfSprite_setTextureRect(object->sprite, *object->rect);
    sfSprite_setPosition(object->sprite, *object->position);
    sfRenderWindow_drawSprite(env->window, object->sprite, NULL);
}
