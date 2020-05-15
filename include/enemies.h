/*
** EPITECH PROJECT, 2020
** Alvaro García
** File description:
** enemies.h
*/

#ifndef ENEMIES_H_
#define ENEMIES_H_

#define ENEMIES_SPRITESHEET "res/textures/enemies-sprite.png"
#define RED_LEEVER_TEXTURE "res/textures/leever/Red.png"
#define BLUE_LEEVER_TEXTURE "res/textures/leever/Blue.png"
#define RED_OCTOROK_TEXTURE "res/textures/octorok/Red_new.png"
#define BLUE_OCTOROK_TEXTURE "res/textures/octorok/Blue_new.png"
#define ENEMY_SPRITE_DIMENSION 16
#define RED_OCTOROK_LIFE 2
#define BLUE_OCTOROK_LIFE 4
#define RED_LEEVER_LIFE 1
#define BLUE_LEEVER_LIFE 3
#define LEEVER_SPEED 1
#define OCTOROK_SPEED 0.5
#define ENEMY_NBR_ANIMATIONS 5
#define FRAMES_TO_MOVE 30

#include "my_rpg.h"

typedef enum enn_type
{
    red_leever,
    blue_leever,
    red_octorok,
    blue_octorok
} enn_type_t;

typedef struct enemy_s
{
    enn_type_t type;
    life_t life;
    animation_t animation;
    int wait_to_move;
    object_t *object;
} enemy_t;

int is_on_init(sfVector2f *pos);
sfIntRect *init_enemy_rect(void);
enemy_t *create_red_leever(void);
enemy_t *create_blue_leever(void);
enemy_t *create_red_octorok(void);
enemy_t *create_blue_octorok(void);
enemy_t *create_enemy(enn_type_t type);
enemy_t **create_enemies(int num_enemies);
void check_enemies_life(scene_t *scene);
void destroy_enemies(enemy_t **enemies);
void destroy_enemy_from_array(enemy_t **enemies, int nbr);
void destroy_enemy(enemy_t *enemy);

// Display related
void display_enemies(environment_t *env);
void display_enemy(enemy_t *enemy, environment_t *env);

// Enemy animations
animation_t *initialize_enemy_animations(void);
void check_enemy_animation(enemy_t *enemy);
void default_enemy_animation_1(enemy_t *enemy);
void default_enemy_animation_2(enemy_t *enemy);
void default_enemy_animation_3(enemy_t *enemy);
void default_enemy_animation_4(enemy_t *enemy);
void enemy_animation(enemy_t *enemy);
void enemy_wdown(enemy_t *enemy);
void enemy_wup(enemy_t *enemy);
void enemy_wleft(enemy_t *enemy);
void enemy_wright(enemy_t *enemy);

// Enemy movement
void move_enemy(enemy_t *enemy, int x_add, int y_add);
void move_enemy_direction(scene_t *scene, enemy_t *enemy, animation_t direction);
void move_enemies(scene_t *scene);
int can_enemy_move(scene_t *scene, enemy_t *enemy, animation_t direction);
int can_wright(sfVector2f *position, scene_t *scene);
int can_wleft(sfVector2f *position, scene_t *scene);
int can_wup(sfVector2f *position, scene_t *scene);
int can_wdown(sfVector2f *position, scene_t *scene);

// DEBUG
enemy_t *create_red_octorok_atbeg(void);
enemy_t **create_enemies_debug(void);

int check_collision_attack(environment_t *env, sfVector2f *direction);
#endif
