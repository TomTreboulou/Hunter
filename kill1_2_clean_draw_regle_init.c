/*
** EPITECH PROJECT, 2018
** kill1_2_clean_draw_regle_init
** File description:
** myhunter
*/

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

int kill_b1(sfRenderWindow *window, vector_t *vector, rest_t *rest)
{
    sfVector2i pos_curs = sfMouse_getPositionRenderWindow(window);

    if (pos_curs.x < vector->f_bon.x + 45 && pos_curs.x > vector->f_bon.x &&\
    pos_curs.y < vector->f_bon.y + 45 && pos_curs.y > vector->f_bon.y - 20) {
        rest->vie = 0;
        rest->kills += 1;
    }
    return (rest->vie);
}

int kill_b2(sfRenderWindow *window, vector_t *vector, rest_t *rest)
{
    sfVector2i pos_curs = sfMouse_getPositionRenderWindow(window);

    if (pos_curs.x < vector->s_bon.x + 45 && pos_curs.x > vector->s_bon.x &&\
    pos_curs.y < vector->s_bon.y + 40 && pos_curs.y > vector->s_bon.y - 23) {
        rest->vie2 = 0;
        rest->kills += 1;
    }
    return (rest->vie2);
}

void clean(sfRenderWindow *window, sprite_t *sprite, rest_t *rest)
{
    switch (rest->vie_joueur) {
        case 0:
            sfRenderWindow_clear(window, sfBlack);
            break;
        case 1:
            sfRenderWindow_drawSprite(window, sprite->spr16, NULL);
            break;
        case 2:
            sfRenderWindow_drawSprite(window, sprite->spr15, NULL);
            break;
        default:
            clean2(window, sprite, rest);
            break;
    }
    sfRenderWindow_drawSprite(window, sprite->spr3, NULL);
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
}

void draw_regle(sfRenderWindow *window, sprite_t *sprite)
{
    sfRenderWindow_drawSprite(window, sprite->spr1, NULL);
    sfRenderWindow_drawSprite(window, sprite->spr18, NULL);
}

void init(rest_t *rest)
{
    rest->vie = 1;
    rest->vie2 = 1;
    rest->check = 0;
    rest->checkweapon = 1;
    rest->vie_joueur = 8;
    rest->kills = 0;
}