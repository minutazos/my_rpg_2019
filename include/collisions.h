/*
** EPITECH PROJECT, 2020
** Alvaro García
** File description:
** collisions.h
*/

#ifndef _COLLISIONS_H_
#define _COLLISIONS_H_

#define OVERWORLD_BINARY_PATH "res/textures/overworld_collisions.png"
#define PLAYER_C 0
#define ENEMY_C 1

#include "my_rpg.h"

char **alloc_collider_array(void);
sfImage *create_collider_image(char const *texture_path);
char **create_collider_array(char const *texture);
sfVector2u normalize_position(sfVector2f *pos_f);
int check_enemy_up(char **array, sfVector2u pos);
int check_enemy_left(char **array, sfVector2u pos);
int check_enemy_down(char **array, sfVector2u pos);
int check_enemy_right(char **array, sfVector2u pos);
int check_player_up(char **array, sfVector2u pos);
int check_player_left(char **array, sfVector2u pos);
int check_player_down(char **array, sfVector2u pos);
int check_player_right(char **array, sfVector2u pos);
int check_movement(char **array, sfVector2f *pos,
                    int type, animation_t direction);

#endif
