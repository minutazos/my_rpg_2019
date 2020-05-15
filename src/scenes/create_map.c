/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Create map view
*/

#include "my_rpg.h"

sfImage *get_map_colors(char *texture)
{
    object_t *to_display;
    sfImage *colors;
    sfVector2f pos = create_position(0, 0);
    sfIntRect rect = create_rect(0, 0, INITIAL_VIEW_WIDTH, INITIAL_VIEW_HEIGHT);

    to_display = create_object(texture, &pos, &rect, screen);
    if (to_display == NULL) {
        return (NULL);
    }
    sfSprite_setTextureRect(to_display->sprite, *to_display->rect);
    sfSprite_setPosition(to_display->sprite, *to_display->position);
    colors = sfTexture_copyToImage(to_display->texture);
    destroy_to_display(to_display);
    if (colors == NULL) {
        return (NULL);
    }
    return (colors);
}

view_t *create_map_view(void)
{
    view_t *map_view = malloc(sizeof(view_t));

    if (map_view == NULL) {
        return (NULL);
    }
    map_view->rect = get_map_rect();
    map_view->view = sfView_createFromRect(*map_view->rect);
    map_view->texture = my_strdup(OVERWORLD_TEXTURE_PATH);
    map_view->colliders = create_collider_array(OVERWORLD_BINARY_PATH);
    //map_view->colors = get_map_colors(map_view->texture);
    return (map_view);
}

sfFloatRect *create_float_ptr_rect(float left, float top,
                                   float width, float height)
{
    sfFloatRect *rect = malloc(sizeof(sfFloatRect));

    if (rect == NULL) {
        return (NULL);
    }
    rect->left = left;
    rect->top = top;
    rect->width = width;
    rect->height = height;
    return (rect);
}

view_t *create_hud_view(void)
{
    view_t *hud_view = malloc(sizeof(view_t));

    if (hud_view == NULL) {
       return (NULL);
    }
    hud_view->rect = create_float_ptr_rect(0, 0, HUD_WIDTH, HUD_HEIGHT);
    hud_view->view = sfView_createFromRect(*hud_view->rect);
    hud_view->texture = NULL;

    return (hud_view);
}

view_t *create_pause_view(void)
{
    view_t *pause_view = malloc(sizeof(view_t));

    if (pause_view == NULL) {
        return (NULL);
    }
    pause_view->rect = create_float_ptr_rect(0, 0, PAUSE_WIDTH, PAUSE_HEIGHT);
    pause_view->view = sfView_createFromRect(*pause_view->rect);
    pause_view->texture = NULL;

    return (pause_view);
}

scene_t *create_map_scene(environment_t *env)
{
    scene_t *map_scene = malloc(sizeof(scene_t));
    char **prueba;

    if (map_scene == NULL) {
        return (NULL);
    }
    map_scene->main = create_map_view();
    map_scene->secondary = create_hud_view();
    map_scene->enemies = create_enemies(200);
        prueba = create_collider_array(OVERWORLD_BINARY_PATH);
    return (map_scene);
}