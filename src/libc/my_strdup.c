/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** strcpy with malloc
*/

#include "libc.h"

char *my_strdup(char *src)
{
    int len = 0;
    char *str = NULL;

    while (src[len])
        len++;
    str = malloc(sizeof(src) * (len + 1));
    if (str == NULL)
        return (NULL);
    my_strcpy(str, src);
    return (str);
}
