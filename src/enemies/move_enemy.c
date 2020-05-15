/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Enemies movement behaviour
*/

#include "my_rpg.h"

void check_enemies_life(scene_t *scene)
{
    for (int i = 0; scene->enemies[i] != NULL; ++i) {
        if (scene->enemies[i]->life.life <= 0) {
            destroy_enemy_from_array(scene->enemies, i);
        }
    }
}

void move_enemies(scene_t *scene)
{
    animation_t direction;
    animation_t forbidden;

    check_enemies_life(scene);
    for (int i = 0; scene->enemies[i] != NULL; ++i) {
        /*do {
            direction = (rand() % 4) + 2;
        } while (can_enemy_move(scene, scene->enemies[i],
                                direction -2) == FALSE);*/
        direction = (rand() % 4) + 2;
        if (scene->enemies[i]->wait_to_move == FRAMES_TO_MOVE) {
            scene->enemies[i]->wait_to_move = 0;
            move_enemy_direction(scene, scene->enemies[i], direction);
        } else {
            move_enemy_direction(scene, scene->enemies[i],
                                 scene->enemies[i]->animation);
        }
    }
}

void move_enemy_direction(scene_t *scene, enemy_t *enemy, animation_t direction)
{
    enemy->wait_to_move++;
    switch (direction) {
    case WALKING_UP:
        enemy->animation = WALKING_UP;
        if (check_movement(scene->main->colliders,
                            enemy->object->position,
                            ENEMY_C,
                            WALKING_UP))
            move_enemy(enemy, 0, -1);
        break;
    case WALKING_RIGHT:
        enemy->animation = WALKING_RIGHT;
        if (check_movement(scene->main->colliders,
                            enemy->object->position,
                            ENEMY_C,
                            WALKING_RIGHT))
            move_enemy(enemy, 1, 0);
        break;
    case WALKING_DOWN:
        enemy->animation = WALKING_DOWN;
        if (check_movement(scene->main->colliders,
                            enemy->object->position,
                            ENEMY_C,
                            WALKING_DOWN))
            move_enemy(enemy, 0, 1);
        break;
    case WALKING_LEFT:
        enemy->animation = WALKING_LEFT;
        if (check_movement(scene->main->colliders,
                            enemy->object->position,
                            ENEMY_C,
                            WALKING_LEFT))
            move_enemy(enemy, -1, 0);
        break;
    default:
        enemy->animation = NO_ANIMATION;
    }
}

void move_enemy(enemy_t *enemy, int x_add, int y_add)
{
    if (enemy->type == red_octorok || enemy->type == blue_octorok) {
        enemy->object->position->x += x_add * OCTOROK_SPEED;
        enemy->object->position->y += y_add * OCTOROK_SPEED;
    } else if (enemy->type == red_leever || enemy->type == blue_leever) {
        enemy->object->position->x += x_add * LEEVER_SPEED;
        enemy->object->position->y += y_add * LEEVER_SPEED;
    }
}
