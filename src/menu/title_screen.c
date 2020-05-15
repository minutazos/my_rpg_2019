/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** title screen
*/

#include "my_rpg.h"

object_t *create_title_screen(void)
{
    object_t *title_screen;
    sfVector2f *pos;
    sfIntRect *rect;

    pos = malloc(sizeof(sfVector2f));
    rect = malloc(sizeof(sfIntRect));
    if (pos == NULL || rect == NULL) {
        return (NULL);
    }
    pos->x = 0;
    pos->y = 0;
    rect->left = 0;
    rect->top = 0;
    rect->width = TITLE_SCREEN_WIDTH;
    rect->height = TITLE_SCREEN_HEIGHT + 140;
    title_screen = create_object(TITLE_SCREEN_TEXTURE_PATH, pos, rect, screen);
    return (title_screen);
}
