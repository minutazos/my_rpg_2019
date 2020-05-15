/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** We check the scene collider array to know if we can move or not
*/

#include "my_rpg.h"

sfVector2u normalize_position(sfVector2f *pos_f)
{
    sfVector2u pos;

    if (pos_f->x >= 0 && pos_f->y >= 0) {
        pos.x = (unsigned int)pos_f->x;
        pos.y = (unsigned int)pos_f->y;
    }
    return (pos);
}

int check_movement(char **array, sfVector2f *pos_f,
                    int type, animation_t direction)
{
    sfVector2u pos = normalize_position(pos_f);
    int (*enemy_funcs[4])(char **array, sfVector2u) = {check_enemy_up,
                                                    check_enemy_down,
                                                    check_enemy_left,
                                                    check_enemy_right};
    int (*player_funcs[4])(char **array, sfVector2u) = {check_player_up,
                                                    check_player_down,
                                                    check_player_left,
                                                    check_player_right};

    if (type == PLAYER_C)
        return(player_funcs[direction - 2](array, pos));
    if (type == ENEMY_C)
        return (TRUE);
    //    return(enemy_funcs[direction - 2](array, pos));
    return (FALSE);
}
