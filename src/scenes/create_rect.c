/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create rect
*/

#include "my_rpg.h"

sfIntRect create_rect(int left, int top, int width, int height)
{
    sfIntRect rect;

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return (rect);
}
