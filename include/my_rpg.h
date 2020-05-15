/*
** EPITECH PROJECT, 2020
** Nathan Casabieille
** File description:
** my_rpg header file
*/

#ifndef MY_RPG_H_
#define MY_RPG_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

#define TRUE 1
#define FALSE 0

#include "environment.h"
#include "object.h"
#include "player.h"
#include "scenes.h"
#include "hud.h"
#include "enemies.h"
#include "collisions.h"
#include "libc.h"

void my_sleep(float wait_time);
void main_loop(environment_t *env);
void free_music(environment_t *env);
void check_player_animation(player_t *player);
void update(environment_t *env);
void analyse_events(environment_t *env);
void hdl_keyboard_arrows(sfEvent event, environment_t *env);
void hdl_keyboard_return(sfEvent event, environment_t *env);
void hdl_keyboard_ctrl(sfEvent event, environment_t *env);
void hdl_keyboard_a(sfEvent event, environment_t *env);
void hdl_keyboard_m(sfEvent event, environment_t *env);
void play_music(environment_t *env, const char *filepath, int loop);
void framerate_independent_loop(environment_t *env);
void hdl_keyboard_esc(sfEvent event, environment_t *env);
sfVector2f *create_ptr_position(float x, float y);
sfIntRect *create_ptr_rect(int left, int top, int width, int height);
void check_collisions_x(environment_t *env);
void check_collisions_block(environment_t *env);
void check_collisions_y(environment_t *env);
void attack_up_animation(player_t *player);
void attack_down_animation(player_t *player);
void attack_left_animation(player_t *player);
void attack_right_animation(player_t *player);
sfFloatRect create_float_rect(float left, float top, float width, float height);
int pause_game(environment_t *env);
int rpg_main(void);
void quest(environment_t *env);

#endif
