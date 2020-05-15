/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update weapons for hud
*/

#include "hud.h"

int update_sword(player_t *player, t_hud *hud)
{
    if (player->inventory.weapon[SLOT_SWORD] == wooden_sword) {
        if (hud->weapon[SLOT_SWORD] != NULL) {
            destroy_object(hud->weapon[SLOT_SWORD]);
        }
        hud->weapon[SLOT_SWORD] = create_object(WOODEN_SWORD_SPRITE,
            create_ptr_position(376, 60),
            create_ptr_rect(0, 0, WEAPON_WIDTH, WEAPON_HEIGHT), other);
        if (hud->weapon[SLOT_SWORD] == NULL) {
            return (1);
        }
    }
    return (0);
}

int update_bomb(player_t *player, t_hud *hud)
{
    if (player->inventory.weapon[SLOT_BOMB] == bomb) {
        if (hud->weapon[SLOT_BOMB] != NULL) {
            destroy_object(hud->weapon[SLOT_BOMB]);
        }
        hud->weapon[SLOT_BOMB] = create_object(BOMB_SPRITE,
            create_ptr_position(350, 60),
            create_ptr_rect(0, 0, WEAPON_WIDTH, WEAPON_HEIGHT), other);
        if (hud->weapon[SLOT_BOMB] == NULL) {
            return (1);
        }
    }
    return (0);
}

int update_weapon(player_t *player, t_hud *hud)
{
    if (update_sword(player, hud) || update_bomb(player, hud)) {
        return (1);
    }
    return (0);
}
