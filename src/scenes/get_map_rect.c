/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** get_map_rect
*/

#include "my_rpg.h"

sfFloatRect *get_map_rect(void)
{
    sfFloatRect *rect = malloc(sizeof(sfFloatRect));

    if (rect == NULL) {
        return (NULL);
    }
    rect->width = SCENE_WIDTH;
    rect->height = SCENE_HEIGHT;
    rect->left = 7 * rect->width;
    rect->top = 7 * rect->height;
    return (rect);
}
