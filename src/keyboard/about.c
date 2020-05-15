/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** about
*/

#include "my_rpg.h"

void is_in_menu(environment_t *env)
{
    if (env->is_in_about == FALSE) {
        env->is_in_about = TRUE;
        sfTexture_destroy(env->menu->texture);
        env->menu->texture = sfTexture_createFromFile(ABOUT_TEXTURE_PATH, NULL);
        sfSprite_setTexture(env->menu->sprite, env->menu->texture, sfTrue);
        env->menu->rect = create_ptr_rect(0, 0, TITLE_SCREEN_WIDTH,
                                          TITLE_SCREEN_HEIGHT + 140);
    }
    else {
        env->is_in_about = FALSE;
        sfTexture_destroy(env->menu->texture);
        env->menu->texture = sfTexture_createFromFile(TITLE_SCREEN_TEXTURE_PATH,
                                                      NULL);
        sfSprite_setTexture(env->menu->sprite, env->menu->texture, sfTrue);
        sfSprite_setTextureRect(env->menu->sprite,
                                create_rect(0, 0,
                                            TITLE_SCREEN_WIDTH,
                                            TITLE_SCREEN_HEIGHT + 140));
    }
}

void hdl_keyboard_a(sfEvent event, environment_t *env)
{
    if (event.key.code == sfKeyA) {
        if (env->is_in_menu == TRUE) {
            is_in_menu(env);
        }
    }
}
