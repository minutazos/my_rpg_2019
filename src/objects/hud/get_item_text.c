/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create text for items to display on hud
*/

#include "hud.h"

char *get_gems_text(player_t *player)
{
    char *nbr_of_gems = my_itoa(player->gems);
    char *gems_text = malloc(sizeof(char) * (my_strlen(nbr_of_gems) + 2));

    if (gems_text == NULL || nbr_of_gems == NULL) {
        return (NULL);
    }
    gems_text[0] = 'x';
    gems_text[1] = '\0';
    my_strcat(gems_text, nbr_of_gems);
    return (gems_text);
}

char *get_bomb_text(player_t *player)
{
    char *nbr_of_bombs = my_itoa(player->inventory.nb_bombs);
    char *bombs_text = malloc(sizeof(char) * (my_strlen(nbr_of_bombs) + 2));

    if (bombs_text == NULL || nbr_of_bombs == NULL) {
        return (NULL);
    }
    bombs_text[0] = 'x';
    bombs_text[1] = '\0';
    my_strcat(bombs_text, nbr_of_bombs);
    return (bombs_text);
}
