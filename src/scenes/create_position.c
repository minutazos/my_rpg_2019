/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create position
*/

#include "my_rpg.h"

sfVector2f create_position(float x, float y)
{
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}
