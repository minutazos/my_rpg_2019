/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Map structure
*/

#ifndef SCENES_H_
#define SCENES_H_

#define TITLE_SCREEN_TEXTURE_PATH "res/textures/title_screen.jpg"
#define OVERWORLD_TEXTURE_PATH "res/textures/overworld_new.png"
#define CAVE_TEXTURE_PATH "res/textures/cave.jpg"
#define PAUSE_TEXTURE_PATH "res/textures/pause.png"
#define TITLE_SCREEN_WIDTH 640
#define TITLE_SCREEN_HEIGHT 582
#define INITIAL_VIEW_WIDTH 4096
#define INITIAL_VIEW_HEIGHT 1408
#define SCENE_WIDTH 256
#define SCENE_HEIGHT 176
#define PAUSE_WIDTH 640
#define PAUSE_HEIGHT 582

#include "my_rpg.h"

typedef struct view_s {
    sfView *view;
    char *texture;
    sfFloatRect *rect;
    char **colliders;
} view_t;

typedef struct scene_s {
    view_t *main;
    view_t *secondary;
    view_t *pause;
    enemy_t **enemies;
} scene_t;

object_t *init_scene(environment_t *env);
void destroy_to_display(object_t *to_display);
void display_scene(environment_t *env);
void display_menu_scene(environment_t *env);
void display_map_scene(environment_t *env);
void display_game_scene(environment_t *env);
void destroy_map_scene(environment_t *env);
void display_pause(environment_t *env);

sfFloatRect *get_map_rect(void);
sfImage *get_map_colors(char *texture);
view_t *create_map_view(void);
scene_t *create_map_scene(environment_t *env);
void charge_map_scene(environment_t *env);
view_t *create_hud_view(void);
view_t *create_pause_view(void);

void scroll_scene(environment_t *env);

sfVector2f create_position(float x, float y);
sfIntRect create_rect(int left, int top, int width, int height);

void cave(environment_t *env);
object_t *create_cave(void);
void check_cave(environment_t *env);

#endif
