/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display the hud
*/

#include "hud.h"

void display_life(t_hud_life *life, environment_t *env)
{
    for (int i = 0; life->full_life[i]; i++) {
        display_object(life->full_life[i], env);
    }
}

void display_hud(environment_t *env)
{
    sfText *gems = create_text(get_gems_text(env->player),
                               create_position(250, 35));
    sfText *keys = create_text("x0", create_position(250, 70));
    sfText *bomb = create_text(get_bomb_text(env->player),
                               create_position(250, 100));

    display_object(env->hud->background, env);
    if (env->hud->weapon[SLOT_BOMB] != NULL) {
        display_object(env->hud->weapon[SLOT_BOMB], env);
    }
    if (env->hud->weapon[SLOT_SWORD] != NULL) {
        display_object(env->hud->weapon[SLOT_SWORD], env);
    }
    sfRenderWindow_drawText(env->window, gems, NULL);
    sfRenderWindow_drawText(env->window, keys, NULL);
    sfRenderWindow_drawText(env->window, bomb, NULL);
    display_life(env->hud->life, env);
    update_hud(env);
}
