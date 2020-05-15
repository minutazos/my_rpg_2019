/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** instantiate ennemy
*/

#include "my_rpg.h"

enemy_t *create_red_leever(void)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    object_t *enemy_obj;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = init_enemy_rect();

    if (pos == NULL || rect == NULL)
        return (NULL);
    pos->x = rand() % INITIAL_VIEW_WIDTH;
    pos->y = rand() % INITIAL_VIEW_HEIGHT;
    enemy_obj = create_object(RED_LEEVER_TEXTURE, pos, rect, character);
    if (enemy == NULL || enemy_obj == NULL)
        return (NULL);
    enemy->type = blue_octorok;
    enemy->life.life = RED_LEEVER_LIFE;
    enemy->life.max_life = RED_LEEVER_LIFE;
    enemy->object = enemy_obj;
    enemy->animation = NO_ANIMATION;
    return (enemy);
}

enemy_t *create_blue_leever(void)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    object_t *enemy_obj;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = init_enemy_rect();

    if (pos == NULL || rect == NULL)
        return (NULL);
    pos->x = rand() % INITIAL_VIEW_WIDTH;
    pos->y = rand() % INITIAL_VIEW_HEIGHT;
    enemy_obj = create_object(BLUE_LEEVER_TEXTURE, pos, rect, character);
    if (enemy == NULL || enemy_obj == NULL)
        return (NULL);
    enemy->type = blue_octorok;
    enemy->life.life = BLUE_LEEVER_LIFE;
    enemy->life.max_life = BLUE_LEEVER_LIFE;
    enemy->object = enemy_obj;
    enemy->animation = NO_ANIMATION;
    return (enemy);
}

enemy_t *create_red_octorok(void)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    object_t *enemy_obj;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = init_enemy_rect();

    if (pos == NULL || rect == NULL)
        return (NULL);
    do {
        pos->x = rand() % INITIAL_VIEW_WIDTH;
        pos->y = rand() % INITIAL_VIEW_HEIGHT;
    } while (is_on_init(pos) == TRUE);
    enemy_obj = create_object(RED_OCTOROK_TEXTURE, pos, rect, character);
    if (enemy == NULL || enemy_obj == NULL)
        return (NULL);
    enemy->type = blue_octorok;
    enemy->life.life = RED_OCTOROK_LIFE;
    enemy->life.max_life = RED_OCTOROK_LIFE;
    enemy->object = enemy_obj;
    enemy->animation = NO_ANIMATION;
    return (enemy);
}

enemy_t *create_blue_octorok(void)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    object_t *enemy_obj;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = init_enemy_rect();

    if (pos == NULL || rect == NULL)
        return (NULL);
    do {
        pos->x = rand() % INITIAL_VIEW_WIDTH;
        pos->y = rand() % INITIAL_VIEW_HEIGHT;
    } while (is_on_init(pos) == TRUE);
    enemy_obj = create_object(BLUE_OCTOROK_TEXTURE, pos, rect, character);
    if (enemy == NULL || enemy_obj == NULL)
        return (NULL);
    enemy->type = blue_octorok;
    enemy->life.life = BLUE_OCTOROK_LIFE;
    enemy->life.max_life = BLUE_OCTOROK_LIFE;
    enemy->object = enemy_obj;
    enemy->animation = NO_ANIMATION;
    return (enemy);
}
