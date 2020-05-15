/*
** EPITECH PROJECT, 2020
** Nathan Casabieille
** File description:
** object.h
*/

#ifndef OBJECT_H_
#define OBJECT_H_

#include "my_rpg.h"

typedef struct environment_s environment_t;

typedef enum {
    tile,
    screen,
    obstacle,
    character,
    other
} type_t;

typedef struct object_s {
    type_t type;
    sfIntRect *rect;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f *position;
} object_t;

void destroy_object(object_t *object);
void display_object(object_t *object, environment_t *env);
void animate_object(object_t *object, int offset, int min_value, int max_value);
object_t *create_object(char const *texture, sfVector2f *pos,
                        sfIntRect *rect, type_t type);

#endif
