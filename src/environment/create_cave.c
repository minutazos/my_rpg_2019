/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create cave
*/

#include "my_rpg.h"

object_t *create_cave(void)
{
    object_t *cave;
    sfVector2f *pos;
    sfIntRect *rect;

    pos = malloc(sizeof(sfVector2f));
    rect = malloc(sizeof(sfIntRect));
    if (pos == NULL || rect == NULL) {
        return (NULL);
    }
    pos->x = 7 * SCENE_WIDTH;
    pos->y = 7 * SCENE_HEIGHT;
    rect->left = 0;
    rect->top = 0;
    rect->width = SCENE_WIDTH;
    rect->height = SCENE_HEIGHT;
    cave = create_object(CAVE_TEXTURE_PATH, pos, rect, screen);
    return (cave);
}
