/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create ptr
*/

#include "my_rpg.h"

sfVector2f *create_ptr_position(float x, float y)
{
    sfVector2f *pos = malloc(sizeof(sfVector2f));

    if (pos == NULL) {
        return (NULL);
    }
    pos->x = x;
    pos->y = y;
    return (pos);
}

sfIntRect *create_ptr_rect(int left, int top, int width, int height)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect));

    if (rect == NULL) {
        return (NULL);
    }
    rect->left = left;
    rect->top = top;
    rect->width = width;
    rect->height = height;
    return (rect);
}
