/*
** EPITECH PROJECT, 2018
** decvec_img_spr_sound_tex
** File description:
** mmyhunter
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

void vector2(vector_t *vector)
{
    vector->vitesse1 = (sfVector2f){4, 0};
    vector->first_finish = (sfVector2f){1348, 600};
    vector->f_bon = (sfVector2f){888, 600};
    vector->explosion_ak = (sfVector2f){1265, 624};
    vector->explosion_glock = (sfVector2f){1350, 600};
    vector->weapon = (sfVector2f){1215, 654};
    vector->scale = (sfVector2f){0.3, 0.3};
    vector->s_bon = (sfVector2f){1100, 528};
    vector->heart_pos = (sfVector2f){1800, 25};
    vector->regle_pos = (sfVector2f){700, 0};
    vector->round_pos = (sfVector2f){1000, 100};
    vector->middle_pos = (sfVector2f){600, 425};
}

void image2(image_t *image)
{
    image->img1 = sfImage_createFromFile("Picture/backgroundhunter.jpg");
    image->img2 = sfImage_createFromFile("Picture/test.png");
    image->img3 = sfImage_createFromFile("Picture/viseur.png");
    image->img4 = sfImage_createFromFile("Picture/balle.png");
    image->img5 = sfImage_createFromFile("Picture/pist.png");
    image->img6 = sfImage_createFromFile("Picture/shoot1.png");
    image->img7 = sfImage_createFromFile("Picture/balle.png");
    image->img8 = sfImage_createFromFile("Picture/shoot2.png");
    image->img9 = sfImage_createFromFile("Picture/heart1.png");
    image->img10 = sfImage_createFromFile("Picture/heart2.png");
    image->img11 = sfImage_createFromFile("Picture/heart3.png");
    image->img12 = sfImage_createFromFile("Picture/heart4.png");
    image->img13 = sfImage_createFromFile("Picture/heart5.png");
    image->img14 = sfImage_createFromFile("Picture/heart6.png");
    image->img15 = sfImage_createFromFile("Picture/heart7.png");
    image->img16 = sfImage_createFromFile("Picture/heart8.png");
    image->img17 = sfImage_createFromFile("Picture/heart9.png");
    image->img18 = sfImage_createFromFile("Picture/regle.png");
    image->img19 = sfImage_createFromFile("Picture/round1.png");
    image->img20 = sfImage_createFromFile("Picture/win.png");
}

void texture2(texture_t *texture, image_t *image)
{
    texture->tex1 = sfTexture_createFromImage(image->img1, NULL);
    texture->tex2 = sfTexture_createFromImage(image->img2, NULL);
    texture->tex3 = sfTexture_createFromImage(image->img3, NULL);
    texture->tex4 = sfTexture_createFromImage(image->img4, NULL);
    texture->tex5 = sfTexture_createFromImage(image->img5, NULL);
    texture->tex6 = sfTexture_createFromImage(image->img6, NULL);
    texture->tex7 = sfTexture_createFromImage(image->img7, NULL);
    texture->tex8 = sfTexture_createFromImage(image->img8, NULL);
    texture->tex9 = sfTexture_createFromImage(image->img9, NULL);
    texture->tex10 = sfTexture_createFromImage(image->img10, NULL);
    texture->tex11 = sfTexture_createFromImage(image->img11, NULL);
    texture->tex12 = sfTexture_createFromImage(image->img12, NULL);
    texture->tex13 = sfTexture_createFromImage(image->img13, NULL);
    texture->tex14 = sfTexture_createFromImage(image->img14, NULL);
    texture->tex15 = sfTexture_createFromImage(image->img15, NULL);
    texture->tex16 = sfTexture_createFromImage(image->img16, NULL);
    texture->tex17 = sfTexture_createFromImage(image->img17, NULL);
    texture->tex18 = sfTexture_createFromImage(image->img18, NULL);
    texture->tex19 = sfTexture_createFromImage(image->img19, NULL);
    texture->tex20 = sfTexture_createFromImage(image->img20, NULL);
}

void sprite2(sprite_t *sprite, texture_t *texture, vector_t *vector)
{
    sprite->spr1 = sfSprite_create();
    sfSprite_setTexture(sprite->spr1, texture->tex1, sfTrue);
    sprite->spr2 = sfSprite_create();
    sfSprite_setTexture(sprite->spr2, texture->tex2, sfTrue);
    sfSprite_setPosition(sprite->spr2, vector->weapon);
    sprite->spr3 = sfSprite_create();
    sfSprite_setScale(sprite->spr3, vector->scale);
    sfSprite_setTexture(sprite->spr3, texture->tex3, sfTrue);
    sprite->spr4 = sfSprite_create();
    sfSprite_setTexture(sprite->spr4, texture->tex4, sfTrue);
    sfSprite_setPosition(sprite->spr4, vector->explosion_ak);
    sprite->spr5 = sfSprite_create();
    sfSprite_setTexture(sprite->spr5, texture->tex5, sfTrue);
    sfSprite_setPosition(sprite->spr5, vector->weapon);
    sprite->spr6 = sfSprite_create();
    sfSprite_setTexture(sprite->spr6, texture->tex6, sfTrue);
    sfSprite_setPosition(sprite->spr6, vector->f_bon);
    sprite->spr7 = sfSprite_create();
    sfSprite_setTexture(sprite->spr7, texture->tex7, sfTrue);
    sfSprite_setPosition(sprite->spr7, vector->explosion_glock);
}

void sound2(sound_t *sound)
{
    sound->sound_ak = sfSoundBuffer_createFromFile("Sound/ak_audio.ogg");
    sound->ak = sfSound_create();
    sfSound_setBuffer(sound->ak, sound->sound_ak);
    sound->sound_glock = sfSoundBuffer_createFromFile("Sound/glock_audio.ogg");
    sound->glock = sfSound_create();
    sfSound_setBuffer(sound->glock, sound->sound_glock);
}
