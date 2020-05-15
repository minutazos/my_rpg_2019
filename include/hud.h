/*
** EPITECH PROJECT, 2020
** Thomas Samson
** File description:
** header file for HUD
*/

#ifndef STATUS_BAR_H_
#define STATUS_BAR_H_

#include "my_rpg.h"

#define HUD_BACKGROUND_SPRITE "res/textures/hud.jpg"
#define HUD_WIDTH 640
#define HUD_HEIGHT 140

#define WOODEN_SWORD_SPRITE "res/textures/sword_hud.jpg"
#define WHITE_SWORD_SPRITE "res/textures/sword_hud.jpg"
#define BOMB_SPRITE "res/textures/bomb.jpg"
#define WEAPON_WIDTH 25
#define WEAPON_HEIGHT 47

#define LIFE_SPRITE "res/textures/heart.jpg"
#define WIDTH_LIFE 30
#define HEIGHT_LIFE 35

typedef struct object_s object_t;
typedef struct player_s player_t;
typedef struct environment_s environment_t;

typedef struct s_hud_life
{
    object_t **full_life;
} t_hud_life;

typedef struct s_hud
{
    object_t *background;
    object_t **weapon;
    t_hud_life *life;
    int gems;
    int keys;
    int bombs;
    sfView *view;
} t_hud;

t_hud_life *init_life(player_t *player);

t_hud *create_hud(player_t *player);

sfText *create_text(char *text_to_write, sfVector2f pos);

char *get_gems_text(player_t *player);
char *get_bomb_text(player_t *player);

void update_hud(environment_t *env);
void free_hud(t_hud *hud);
void display_hud(environment_t *env);

int update_weapon(player_t *player, t_hud *hud);

#endif
