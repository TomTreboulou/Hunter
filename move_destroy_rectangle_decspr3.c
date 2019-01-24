/*
** EPITECH PROJECT, 2018
** move_destroy_rectangle_decspr3
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

void move_rect(rect_t *rectangle, sfSprite **sprite6)
{
    rectangle->rect.left += 71;
    if (rectangle->rect.left > 192)
        rectangle->rect.left = 0;
    sfSprite_setTextureRect(*sprite6, rectangle->rect);
}

void move_rect2(rect_t *rectangle, sfSprite **sprite8)
{
    rectangle->rect1.left += 67;
    if (rectangle->rect1.left > 186)
        rectangle->rect1.left = 0;
    sfSprite_setTextureRect(*sprite8, rectangle->rect1);
}

void destroy2(sound_t *sound, sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
    sfSound_destroy(sound->ak);
    sfSoundBuffer_destroy(sound->sound_ak);
    sfSound_destroy(sound->glock);
    sfSoundBuffer_destroy(sound->sound_glock);
}

void rectangle(rect_t *recta)
{
    recta->rect.top = 0;
    recta->rect.left = 0;
    recta->rect.width = 71;
    recta->rect.height = 64;
    recta->rect1.top = 0;
    recta->rect1.left = 0;
    recta->rect1.width = 62;
    recta->rect1.height = 60;
}

void sprite3(sprite_t *sprite, texture_t *texture, vector_t *vector)
{
    sprite->spr8 = sfSprite_create();
    sfSprite_setTexture(sprite->spr8, texture->tex8, sfTrue);
    sfSprite_setPosition(sprite->spr8, vector->s_bon);
    sprite->spr9 = sfSprite_create();
    sfSprite_setTexture(sprite->spr9, texture->tex9, sfTrue);
    sfSprite_setPosition(sprite->spr9, vector->heart_pos);
    sprite->spr10 = sfSprite_create();
    sfSprite_setTexture(sprite->spr10, texture->tex10, sfTrue);
    sfSprite_setPosition(sprite->spr10, vector->heart_pos);
    sprite->spr11 = sfSprite_create();
    sfSprite_setTexture(sprite->spr11, texture->tex11, sfTrue);
    sfSprite_setPosition(sprite->spr11, vector->heart_pos);
    sprite->spr12 = sfSprite_create();
    sfSprite_setTexture(sprite->spr12, texture->tex12, sfTrue);
    sfSprite_setPosition(sprite->spr12, vector->heart_pos);
    sprite->spr13 = sfSprite_create();
    sfSprite_setTexture(sprite->spr13, texture->tex13, sfTrue);
    sfSprite_setPosition(sprite->spr13, vector->heart_pos);
    sprite->spr20 = sfSprite_create();
    sfSprite_setTexture(sprite->spr20, texture->tex20, sfTrue);
    sfSprite_setPosition(sprite->spr20, vector->middle_pos);
}