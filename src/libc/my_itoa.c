/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** int to string
*/

#include "libc.h"

char *loop_rev_atoi(int num, int i, char *str)
{
    while (num > 0) {
        str[i] = ((num % 10) + 48);
        num /= 10;
        i++;
    }
    str[i] = 0;
    return (str);
}

int count_loop(int tmp, int counter)
{
    while (tmp > 0) {
        tmp /= 10;
        counter++;
    }
    return (counter);
}

char *my_itoa(int num)
{
    char *str;
    int i = 0;
    int counter = num == 0 ? 1 : 0;
    int bool = 0;

    if (num < 0) {
        num *= (-1);
        bool = 1;
    }
    counter = count_loop(num, counter);
    str = malloc(sizeof(char) * (counter + 1));
    if (str == NULL)
        return (NULL);
    if (num == 0)
        return(my_strdup("0"));
    str = loop_rev_atoi(num, i, str);
    if (bool == 1)
        my_strcat(str, "-");
    str = my_revstr(str);
    return (str);
}
