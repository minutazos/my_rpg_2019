/*
** EPITECH PROJECT, 2020
** Thomas Samson
** File description:
** player header file
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#define WOODEN_SWORD_DAMAGE 10
#define WHITE_SWORD_DAMAGE 12
#define BOMB_DAMAGE 15
#define PLAYER_LIFE 3
#define PLAYER_GEMS 0
#define PLAYER_KEYS 0
#define SPAWN_PLAYER_POS_X 1900
#define SPAWN_PLAYER_POS_Y 1310
#define SLOT_BOMB 0
#define SLOT_SWORD 1
#define PLAYER_TEXTURE "res/textures/link_spritesheet.png"
#define SWORD_TEXTURE_PATH "res/textures/sword.jpg"
#define PLAYER_SPRITE_WIDTH 39
#define PLAYER_SPRITE_HEIGHT 48
#define SPEED 1
#define PLAYER_SCALE_X 0.35
#define PLAYER_SCALE_Y 0.30

#define NBR_OF_ANIMATIONS 10
#define NO_ANIMATION 1
#define WALKING_UP 2
#define WALKING_DOWN 3
#define WALKING_LEFT 4
#define WALKING_RIGHT 5
#define PICK_UP_SWORD 6
#define ATTACK_RIGHT 7
#define ATTACK_LEFT 8
#define ATTACK_UP 9
#define ATTACK_DOWN 10

#include "my_rpg.h"

typedef struct enemy_s enemy_t;

typedef int animation_t;

typedef enum weapon
{
    none,
    bomb,
    white_sword,
    wooden_sword
} weapon_t;

typedef enum state
{
    dead,
    alive
} state_t;

typedef struct life_s
{
    unsigned int life;
    unsigned int max_life;
    state_t state;
} life_t;

typedef struct inventory_s
{
    int nb_bombs;
    weapon_t weapon[2];
} inventory_t;

typedef struct player_s
{
    life_t life;
    int quest;
    int keys;
    int gems;
    int nbr_of_kills;
    object_t *object;
    animation_t animation;
    inventory_t inventory;
} player_t;

typedef void (*animation_selector)(player_t *player);

player_t *create_player(void);

void destroy_player(player_t *player);
void lose_life(player_t *player, int damage);
void get_life(player_t *player, int life);
void get_gems(player_t *player, int gems);
void lose_gems(player_t *player, int gems);
void get_keys(player_t *player, int nb_keys);
void get_bombs(player_t *player, int nb_bombs);
void get_sword(player_t *player, weapon_t sword);
void lose_bomb(player_t *player, int bombs);
void move_player(environment_t *env, int x_add, int y_add);
void check_player_animation(player_t *player);
void add_animation(animation_t *animations, animation_t animation);
void walking_down_animation(player_t *player);
void walking_up_animation(player_t *player);
void walking_left_animation(player_t *player);
void walking_right_animation(player_t *player);
void default_animation(player_t *player);
void change_rect_y_pos(object_t *object, int y);
void change_rect_x_pos(object_t *object, int x);
void change_rect_width(object_t *object, int width);
void change_rect_height(object_t *object, int height);
void display_player(environment_t *env);
void pick_up_sword_animation(player_t *player);

int animations_array_length(animation_t *animations);
int is_first_frame(object_t *object, int min_value, int max_value);
int check_collision_with_enemies(player_t *player, enemy_t **enemies);

#endif
