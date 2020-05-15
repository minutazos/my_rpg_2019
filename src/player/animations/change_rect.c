/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** change player object rect values
*/

#include "my_rpg.h"

void change_rect_y_pos(object_t *object, int y)
{
    object->rect->top = y;
}

void change_rect_x_pos(object_t *object, int x)
{
    object->rect->left = x;
}

void change_rect_width(object_t *object, int width)
{
    object->rect->width = width;
}

void change_rect_height(object_t *object, int height)
{
    object->rect->height = height;
}
