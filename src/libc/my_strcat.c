/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** concatenate two strings
*/

#include "libc.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int size = 0;

    while (dest[size]) {
        size++;
    }
    while (src[i]) {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return (dest);
}
