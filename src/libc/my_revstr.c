/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int i;
    int size;
    char tmp;

    size = 0;
    while (str[size])
        size++;
    i = 0;
    while (i < (size / 2))
    {
        tmp = str[i];
        str[i] = str[(size - 1) - i];
        str[(size - 1) - i] = tmp;
        i++;
    }
    return (str);
}
