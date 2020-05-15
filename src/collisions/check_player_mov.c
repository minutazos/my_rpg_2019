/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** We check the scene collider array to know if we can move or not
*/

#include "my_rpg.h"

int check_player_up(char **array, sfVector2u pos)
{
    int dim_normalized = (int)(PLAYER_SPRITE_WIDTH * PLAYER_SCALE_X - 1);

    if (pos.y > 0 &&
        array[pos.y - 1][pos.x] == TRUE &&
        array[pos.y - 1][pos.x + dim_normalized] == TRUE)
        return (TRUE);
    return (FALSE);
}

int check_player_left(char **array, sfVector2u pos)
{
    int dim_normalized = (int)(PLAYER_SPRITE_HEIGHT * PLAYER_SCALE_Y - 1);

    if (pos.x > 0 &&
        array[pos.y][pos.x - 1] == TRUE &&
        array[pos.y + dim_normalized][pos.x - 1] == TRUE)
        return (TRUE);
    return (FALSE);
}

int check_player_down(char **array, sfVector2u pos)
{
    int dim_normalized = (int)(PLAYER_SPRITE_WIDTH * PLAYER_SCALE_X - 1);

    if (pos.y > 0 &&
        array[pos.y][pos.x] == TRUE &&
        array[pos.y + dim_normalized][pos.x + dim_normalized] == TRUE)
        return (TRUE);
    return (FALSE);
}

int check_player_right(char **array, sfVector2u pos)
{
    int dim_normalized = (int)(PLAYER_SPRITE_HEIGHT * PLAYER_SCALE_Y - 1);

    if (pos.x > 0 &&
        array[pos.y][pos.x + dim_normalized] == TRUE &&
        array[pos.y + dim_normalized][pos.x + dim_normalized] == TRUE)
        return (TRUE);
    return (FALSE);
}
