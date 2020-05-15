/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** copy string
*/

#include "libc.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
