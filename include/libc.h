/*
** EPITECH PROJECT, 2020
** Thomas Samson
** File description:
** libc header file
*/

#ifndef LIBC_H_
#define LIBC_H_

#include "my_rpg.h"

char *my_strcpy(char *dest, char *src);
char *my_strdup(char *src);
char *my_itoa(int num);
char *my_revstr(char *str);
char *my_strcat(char *dest, char *src);

int my_strlen(char *str);

#endif
