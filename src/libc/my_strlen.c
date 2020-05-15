/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** string length
*/

#include "libc.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
