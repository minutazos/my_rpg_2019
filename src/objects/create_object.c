/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create object
*/

#include "my_rpg.h"

object_t *create_object(char const *texture, sfVector2f *pos,
                        sfIntRect *rect, type_t type)
{
    object_t *object = malloc(sizeof(object_t));

    if (object == NULL) {
        return (NULL);
    }
    object->type = type;
    object->rect = rect;
    object->position = pos;
    object->texture = sfTexture_createFromFile(texture, NULL);
    if (!object->texture) {
        return (NULL);
    }
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    return (object);
}

