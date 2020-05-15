/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** sleep in seconds
*/

#include "my_rpg.h"

void my_sleep(float wait_time)
{
    sfTime time;
    float seconds;
    int active = TRUE;
    sfClock *clock;

    clock = sfClock_create();
    while (active == TRUE) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > wait_time) {
            sfClock_restart(clock);
            active = FALSE;
        }
    }
    sfClock_destroy(clock);
}
