/*
** EPITECH PROJECT, 2020
** Alvaro Garcia
** File description:
** Create a 2d array of chars representing the colliders from a binary image
*/

#include "my_rpg.h"

char **alloc_collider_array(void)
{
    char **array = malloc(sizeof(char *) * INITIAL_VIEW_HEIGHT);

    if (array == NULL)
        return (NULL);
    for (int i = 0; i < INITIAL_VIEW_HEIGHT; ++i) {
        array[i] = malloc(sizeof(char) * INITIAL_VIEW_WIDTH);
        if (array[i] == NULL)
            return (NULL);
    }
    return (array);
}

sfImage *create_collider_image(char const *texture_path)
{
    sfTexture *texture = sfTexture_createFromFile(texture_path, NULL);
    sfImage *collider;

    if (texture == NULL)
        return (NULL);
    collider = sfTexture_copyToImage(texture);
    if (collider == NULL) {
        free(texture);
        return (NULL);
    }
    free(texture);
    return (collider);
}

char **create_collider_array(char const *texture)
{
    char **array = alloc_collider_array();
    sfImage *collider_image = create_collider_image(texture);
    sfColor img_color;

    if (array == NULL || collider_image == NULL)
        return (NULL);
    for (unsigned int y = 0; y < INITIAL_VIEW_HEIGHT; ++y) {
        for (unsigned int x = 0; x < INITIAL_VIEW_WIDTH; ++x) {
            img_color = sfImage_getPixel(collider_image, x, y);
            array[y][x] = (img_color.r == 255) ? TRUE : FALSE;
        }
    }
    free(collider_image);
    return (array);


}
