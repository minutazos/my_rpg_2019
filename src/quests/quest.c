/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** quest
*/

#include "my_rpg.h"
#include <stdio.h>

void display_quest(environment_t *env)
{
    sfText *quest;
    char *text2 = my_strdup(my_itoa(4 - (env->player->nbr_of_kills / 2)));
    char *text = malloc(sizeof(char) * (25 + my_strlen(text2)));

    if (env->player->quest == FALSE) {
        my_strcpy(text, "Quest - Kill ennemies : ");
        my_strcat(text, text2);
        quest = create_text(text, create_position(0, 0));
        sfRenderWindow_drawText(env->window, quest, NULL);
    }
    else {
        text2 = my_strdup("Quest finished !\n");
        quest = create_text(text2, create_position(0, 0));
        sfRenderWindow_drawText(env->window, quest, NULL);
    }
    free(text2);
    free(text);
}


void quest(environment_t *env)
{
    if (env->player->quest == FALSE && env->player->nbr_of_kills >= 8) {
        env->player->gems += 50;
        env->player->quest = TRUE;
    }
    display_quest(env);
}
