/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create text to display on hud
*/

#include "hud.h"

sfText *create_text(char *text_to_write, sfVector2f pos)
{
    sfText *text;
    sfFont *font;

    text = sfText_create();
    font = sfFont_createFromFile("res/font.ttf");
    sfText_setString(text, text_to_write);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 20);
    sfText_setPosition(text, pos);
    return (text);
}