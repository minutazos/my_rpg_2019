/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** function pointer array to call the animation function
*/

#include "my_rpg.h"

animation_t *initialize_animations(void)
{
    animation_t *animations = malloc(sizeof(animation_t)
                                     * (NBR_OF_ANIMATIONS + 1));

    if (animations == NULL) {
        return (NULL);
    }
    animations[0] = 0;
    add_animation(animations, NO_ANIMATION);
    add_animation(animations, WALKING_UP);
    add_animation(animations, WALKING_DOWN);
    add_animation(animations, WALKING_LEFT);
    add_animation(animations, WALKING_RIGHT);
    add_animation(animations, PICK_UP_SWORD);
    add_animation(animations, ATTACK_RIGHT);
    add_animation(animations, ATTACK_LEFT);
    add_animation(animations, ATTACK_UP);
    add_animation(animations, ATTACK_DOWN);
    animations[NBR_OF_ANIMATIONS] = 0;
    return (animations);
}

animation_selector *initialize_animation_selector(void)
{
    animation_selector *functions = malloc(sizeof(animation_selector)
                                           * (NBR_OF_ANIMATIONS + 1));

    if (functions == NULL)
        return (NULL);
    functions[0] = &default_animation;
    functions[1] = &walking_up_animation;
    functions[2] = &walking_down_animation;
    functions[3] = &walking_left_animation;
    functions[4] = &walking_right_animation;
    functions[5] = &pick_up_sword_animation;
    functions[6] = &attack_right_animation;
    functions[7] = &attack_left_animation;
    functions[8] = &attack_up_animation;
    functions[9] = &attack_down_animation;
    functions[NBR_OF_ANIMATIONS] = 0;
    return (functions);
}

void check_player_animation(player_t *player)
{
    int i = 0;
    animation_selector *functions = initialize_animation_selector();
    animation_t *animations = initialize_animations();

    while (animations[i] != 0) {
        if (animations[i] == player->animation) {
            functions[i](player);
            break;
        }
        i++;
    }
    free(functions);
    free(animations);
}
