/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** cave
*/

#include "my_rpg.h"

void check_cave(environment_t *env)
{
    if (env->player->object->position->y >= 1246
        && env->player->object->position->y <= 1258) {
        if (env->player->object->position->x >= 1852
            && env->player->object->position->x <= 1862) {
            env->is_in_cave = TRUE;
            env->player->object->position->y = 1389;
            env->player->object->position->x = 1921;
        }
    }
}

void check_pickup_sword(environment_t *env)
{
    if (env->player->object->position->y >= 1312
        && env->player->object->position->y <= 1320) {
        if (env->player->object->position->x >= 1914
            && env->player->object->position->x <= 1936) {
            env->player->animation = PICK_UP_SWORD;
            env->player->inventory.weapon[SLOT_SWORD] = wooden_sword;
        }
    }
}

void display_sword_in_cave(environment_t *env)
{
    object_t *sword = NULL;
    sfVector2f *pos = create_ptr_position(1917, 1325);
    sfIntRect *rect = create_ptr_rect(0, 0, 14, 3);

    if (env->player->inventory.weapon[SLOT_SWORD] == none) {
        sword = create_object(SWORD_TEXTURE_PATH, pos, rect, obstacle);
        display_object(sword, env);
        destroy_object(sword);
    }
}

void cave(environment_t *env)
{
    check_collisions_y(env);
    if (env->is_in_cave == TRUE) {
        animate_object(env->cave, SCENE_WIDTH, 0, SCENE_WIDTH * 2);
        display_object(env->cave, env);
        display_sword_in_cave(env);
        check_pickup_sword(env);
    }
}
