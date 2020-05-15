/*
** EPITECH PROJECT, 2020
** Nathan Casabieille
** File description:
** environment structure
*/

#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

#define FRAMERATE 0.03
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 582
#define BITS_PER_PIXEL 32
#define THEME_MUSIC_PATH "res/musics/main_theme.ogg"
#define ABOUT_TEXTURE_PATH "res/textures/about.jpg"

#include "my_rpg.h"

typedef struct s_hud t_hud;
typedef struct player_s player_t;
typedef struct object_s object_t;
typedef struct scene_s scene_t;

enum key_t {
    NONE,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

typedef struct environment_s {
    int is_in_about;
    key_t last_key;
    object_t *menu;
    object_t *cave;
    int is_in_menu;
    int is_in_cave;
    int exit_status;
    player_t *player;
    sfMusic *audio_source;
    sfRenderWindow *window;
    unsigned int window_width;
    unsigned int window_height;
    scene_t *actual_scene;
    t_hud *hud;
    int pause;
} environment_t;

object_t *create_title_screen(void);
void display_menu(environment_t *env);
void destroy_environment(environment_t *env);
environment_t *create_environment(unsigned int window_height, unsigned int window_width);
void play_audio_source(environment_t *env, const char *filepath, int loop);
void destroy_audio_source(environment_t *env);

#endif
