/*
** EPITECH PROJECT, 2018
** ak_gun_managweapon_game_gameloop
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

void ak(sfEvent event, struct_t *s, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(window, s->sprite->spr4, NULL);
        sfSound_play(s->sound->ak);
        s->rest->vie = kill_b1(window, s->vector, s->rest);
        s->rest->vie2 = kill_b2(window, s->vector, s->rest);
    }
    sfRenderWindow_drawSprite(window, s->sprite->spr2, NULL);
}

void gun(sfEvent event, struct_t *s, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_drawSprite(window, s->sprite->spr7, NULL);
            sfSound_play(s->sound->glock);
            s->rest->vie = kill_b1(window, s->vector, s->rest);
            s->rest->vie2 = kill_b2(window, s->vector, s->rest);
        }
    sfRenderWindow_drawSprite(window, s->sprite->spr5, NULL);
}

void manage_weapon(struct_t *s, sfEvent event, sfRenderWindow *window)
{
    if (s->rest->checkweapon == 1)
        ak(event, s, window);
    else if (s->rest->checkweapon == 2)
        gun(event, s, window);
}

void game(struct_t *s, sfClock *clock, sfRenderWindow *window, sfEvent event)
{
    float seconds;
    sfTime time;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    s->rest->check = 1;
    if (seconds > 0.09)
        move(s->sprite, s->rect, clock);
    bon_1(s->vector, window, s->sprite, s->rest);
    bon_2(s->vector, window, s->sprite, s->rest);
    s->rest->checkweapon = check_w(s->rest, event);
    manage_weapon(s, event, window);
    if (s->rest->vie == 0 && s->rest->vie2 == 0) {
        s->rest->vie = 1;
        s->rest->vie2 = 1;
        s->vector->f_bon.x = 888;
        s->vector->s_bon.x = 1088;
    }
}

void game_loop(struct_t *s, sfRenderWindow *window, sfClock *clock,\
sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event))
        spr1_esc_curs(window, s->vector, s->sprite, event);
    draw_important(window, s->sprite);
    if (event.key.code == sfKeySpace || s->rest->check == 1) {
        game(s, clock, window, event);
    } else
        draw_regle(window, s->sprite);
    clean(window, s->sprite, s->rest);
    clean2(window, s->sprite, s->rest);
}