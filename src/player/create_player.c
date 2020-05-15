/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** initiate player and give all values to stucture
*/

#include "my_rpg.h"

sfVector2f create_scale(float scale_x, float scale_y)
{
    sfVector2f scale;

    scale.x = scale_x;
    scale.y = scale_y;
    return (scale);
}

object_t *creat_player_object(void)
{
    object_t *player_object;
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfIntRect *rect = malloc(sizeof(sfIntRect));

    if (pos == NULL || rect == NULL) {
        return (NULL);
    }
    pos->x = SPAWN_PLAYER_POS_X;
    pos->y = SPAWN_PLAYER_POS_Y;
    rect->top = 0;
    rect->left = 0;
    rect->width = PLAYER_SPRITE_WIDTH;
    rect->height = PLAYER_SPRITE_HEIGHT;
    player_object = create_object(PLAYER_TEXTURE, pos, rect, character);
    sfSprite_setScale(player_object->sprite,
                      create_scale(PLAYER_SCALE_X, PLAYER_SCALE_Y));
    if (player_object == NULL) {
        return (NULL);
    }
    return (player_object);
}

player_t *create_player(void)
{
    player_t *player = malloc(sizeof(player_t));

    if (player == NULL) {
        return (NULL);
    }
    player->life.life = PLAYER_LIFE;
    player->life.max_life = PLAYER_LIFE;
    player->life.state = alive;
    player->gems = PLAYER_GEMS;
    player->keys = PLAYER_KEYS;
    player->animation = NO_ANIMATION;
    player->inventory.weapon[0] = none;
    player->inventory.weapon[1] = none;
    player->inventory.nb_bombs = 0;
    player->nbr_of_kills = 0;
    player->quest = FALSE;
    player->object = creat_player_object();
    if (player->object == NULL)
        return (NULL);
    return (player);
}
