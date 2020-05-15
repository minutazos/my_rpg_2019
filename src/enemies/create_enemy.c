/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** instantiate enemy
*/

#include "my_rpg.h"

sfIntRect *init_enemy_rect(void)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect));

    if (rect == NULL) {
        return (NULL);
    }
    rect->top = 0;
    rect->left = 0;
    rect->width = ENEMY_SPRITE_DIMENSION;
    rect->height = ENEMY_SPRITE_DIMENSION;
    return (rect);
}

int is_on_init(sfVector2f *pos)
{
    float x_min = SPAWN_PLAYER_POS_X - (257 ) + ENEMY_SPRITE_DIMENSION;
    float x_max = SPAWN_PLAYER_POS_X + (257 ) - ENEMY_SPRITE_DIMENSION;
    float y_min = SPAWN_PLAYER_POS_Y - (176 ) + ENEMY_SPRITE_DIMENSION;
    float y_max = SPAWN_PLAYER_POS_Y + (176 ) - ENEMY_SPRITE_DIMENSION;

    if (pos->x >= x_min && pos->x <= x_max &&
        pos->y >= y_min && pos->y <= y_max) {
        return (TRUE);
    }
}

enemy_t *create_red_octorok_atbeg(void)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    object_t *enemy_obj;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = init_enemy_rect();

    if (pos == NULL || rect == NULL)
        return (NULL);
    pos->x = SPAWN_PLAYER_POS_X + 40;
    pos->y = SPAWN_PLAYER_POS_Y + 40;
    enemy_obj = create_object(RED_OCTOROK_TEXTURE, pos, rect, character);
    if (enemy == NULL || enemy_obj == NULL)
        return (NULL);
    enemy->type = blue_octorok;
    enemy->life.life = 100;
    enemy->life.max_life = RED_OCTOROK_LIFE;
    enemy->object = enemy_obj;
    enemy->animation = NO_ANIMATION;
    enemy->wait_to_move = 0;
    return (enemy);
}

enemy_t *create_enemy(enn_type_t type)
{
    enemy_t *enemy;
    enemy_t *(*func[4])(void) = {create_red_leever, create_blue_leever,
        create_red_octorok, create_blue_octorok};

    enemy = func[type]();
    enemy->wait_to_move = 0;
    return (enemy);
}
