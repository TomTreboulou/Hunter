/*
** EPITECH PROJECT, 2018
** exit_draw_move_dash_clean
** File description:
** myhunter
*/

#include <unistd.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <string.h>
#include "myhunter.h"
#include <stdio.h>
#include <SFML/Window.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>

int my_exit(int nb)
{
    return (nb);
}

void draw_important(sfRenderWindow *window, sprite_t *sprite)
{
    sfRenderWindow_drawSprite(window, sprite->spr1, NULL);
    sfRenderWindow_drawSprite(window, sprite->spr19, NULL);
}

void move(sprite_t *sprite, rect_t *rect, sfClock* clock)
{
    move_rect(rect, &sprite->spr6);
    move_rect2(rect, &sprite->spr8);
    sfClock_restart(clock);
}

int dash_h(void)
{
    write(1, "Here is my Hunter the rules are displayed on the menu scre", 58);
    write(1, "en.\nYou can use Right and Left click to shoot", 45);
    write(1, ", Space Bar for play and Escape key for leave the game.\n", 56);
    write(1, "Be carefull the number of enemies you have to kill for win", 58);
    write(1, " is random. Be patient and good luck Captain !\n", 48);
    return EXIT_FAILURE;
}

void clean2(sfRenderWindow *window, sprite_t *sprite, rest_t *rest)
{
    switch (rest->vie_joueur) {
        case 3:
            sfRenderWindow_drawSprite(window, sprite->spr14, NULL);
            break;
        case 4:
            sfRenderWindow_drawSprite(window, sprite->spr13, NULL);
            break;
        case 5:
            sfRenderWindow_drawSprite(window, sprite->spr12, NULL);
            break;
        case 6:
            sfRenderWindow_drawSprite(window, sprite->spr11, NULL);
            break;
        case 7:
            sfRenderWindow_drawSprite(window, sprite->spr10, NULL);
            break;
        default:
            sfRenderWindow_drawSprite(window, sprite->spr9, NULL);
            break;
    }
}