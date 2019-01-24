/*
** EPITECH PROJECT, 2018
** bon1_2_weapon_decspr4_curs
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

void spr1_esc_curs(sfRenderWindow *window, vector_t *vector, sprite_t *sprite,\
sfEvent event)
{
    if (event.type == sfEvtMouseMoved) {
        vector->mouse_pos = sfMouse_getPositionRenderWindow(window);
        vector->weapon.x = vector->mouse_pos.x - 30;
        vector->weapon.y = vector->mouse_pos.y - 5;
        sfSprite_setPosition(sprite->spr3, (sfVector2f) vector->weapon);
    }
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window);
    }
}

void bon_1(vector_t *vector, sfRenderWindow *window, sprite_t *sprite,\
rest_t *rest)
{
    if (vector->s_bon.x < 1234 && rest->vie2) {
        sfRenderWindow_drawSprite(window, sprite->spr8, NULL);
        vector->s_bon.x += 1;
        sfSprite_setPosition(sprite->spr8, vector->s_bon);
    } else if (rest->vie2){
        vector->s_bon.x = 1088;
        rest->vie_joueur -= 1;
        sfRenderWindow_drawSprite(window, sprite->spr8, NULL);
        sfSprite_setPosition(sprite->spr8, vector->s_bon);
    }
}

void bon_2(vector_t *vector, sfRenderWindow *window, sprite_t *sprite,\
rest_t *rest)
{
    if (vector->f_bon.x < 1314 && rest->vie) {
        sfRenderWindow_drawSprite(window, sprite->spr6, NULL);
        vector->f_bon.x += 1;
        sfSprite_setPosition(sprite->spr6, vector->f_bon);
    } else if (rest->vie){
        vector->f_bon.x = 888;
        rest->vie_joueur -= 3;
        sfRenderWindow_drawSprite(window, sprite->spr6, NULL);
        sfSprite_setPosition(sprite->spr6, vector->f_bon);
    }
}

int check_w(rest_t *rest, sfEvent event)
{
    if (event.type == sfEvtKeyPressed) {
        if (event.key.code == sfKeyF1)
            rest->checkweapon = 1;
        else if (event.key.code == sfKeyF2)
            rest->checkweapon = 2;
    }
    return (rest->checkweapon);
}

void sprite4(sprite_t *sprite, texture_t *texture, vector_t *vector)
{
    sprite->spr14 = sfSprite_create();
    sfSprite_setTexture(sprite->spr14, texture->tex14, sfTrue);
    sfSprite_setPosition(sprite->spr14, vector->heart_pos);
    sprite->spr15 = sfSprite_create();
    sfSprite_setTexture(sprite->spr15, texture->tex15, sfTrue);
    sfSprite_setPosition(sprite->spr15, vector->heart_pos);
    sprite->spr16 = sfSprite_create();
    sfSprite_setTexture(sprite->spr16, texture->tex16, sfTrue);
    sfSprite_setPosition(sprite->spr16, vector->heart_pos);
    sprite->spr17 = sfSprite_create();
    sfSprite_setTexture(sprite->spr17, texture->tex17, sfTrue);
    sfSprite_setPosition(sprite->spr17, vector->middle_pos);
    sprite->spr18 = sfSprite_create();
    sfSprite_setTexture(sprite->spr18, texture->tex18, sfTrue);
    sfSprite_setPosition(sprite->spr18, vector->regle_pos);
    sprite->spr19 = sfSprite_create();
    sfSprite_setTexture(sprite->spr19, texture->tex19, sfTrue);
    sfSprite_setPosition(sprite->spr19, vector->round_pos);
}
