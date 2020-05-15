/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** main function
*/

#include "my_rpg.h"

int rpg_main(void)
{
    int ret = 0;
    environment_t *env = create_environment(WINDOW_HEIGHT, WINDOW_WIDTH);

    if (env == NULL) {
        return (84);
    }
    main_loop(env);
    if (env->exit_status == -1) {
        env->exit_status = 0;
    }
    ret = env->exit_status;
    destroy_environment(env);
    return (ret);
}

int main(void)
{
    int rpg = rpg_main();

    if (rpg != 0) {
        return (84);
    }
    return (0);
}
