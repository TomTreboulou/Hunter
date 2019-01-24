/*
** EPITECH PROJECT, 2018
** init_struct_in_scr_loose_scr_launch
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

void init_struct(struct_t *s)
{
    s->vector = malloc(sizeof(vector_t));
    s->image = malloc(sizeof(image_t));
    s->sound = malloc(sizeof(sound_t));
    s->sprite = malloc(sizeof(sprite_t));
    s->texture = malloc(sizeof(texture_t));
    s->rect = malloc(sizeof(rect_t));
    s->rest = malloc(sizeof(rest_t));
    vector2(s->vector);
    sound2(s->sound);
    rectangle(s->rect);
    init(s->rest);
    image2(s->image);
    texture2(s->texture, s->image);
    sprite2(s->sprite, s->texture, s->vector);
    sprite3(s->sprite, s->texture, s->vector);
    sprite4(s->sprite, s->texture, s->vector);
}

void win_screen(sfRenderWindow *window, struct_t *s, sfEvent event)
{
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawSprite(window, s->sprite->spr20, NULL);
    sfRenderWindow_drawSprite(window, s->sprite->spr3, NULL);
    while (sfRenderWindow_pollEvent(window, &event))
        spr1_esc_curs(window, s->vector, s->sprite, event);
    sfRenderWindow_display(window);
}

void loose_screen(sfRenderWindow *window, struct_t *s, sfEvent event)
{
    sfRenderWindow_clear(window, sfWhite);
    sfRenderWindow_drawSprite(window, s->sprite->spr17, NULL);
    sfRenderWindow_drawSprite(window, s->sprite->spr3, NULL);
    while (sfRenderWindow_pollEvent(window, &event))
        spr1_esc_curs(window, s->vector, s->sprite, event);
    sfRenderWindow_display(window);
}

void launch_game(size_t count, sfEvent event)
{
    const sfVideoMode *tab = sfVideoMode_getFullscreenModes(&count);
    sfVideoMode mode = tab[0];
    sfRenderWindow* window = sfRenderWindow_create(mode, "SFML window",\
    sfResize | sfClose, NULL);
    sfClock* clock = sfClock_create();
    struct_t *s = malloc(sizeof(struct_t));
    init_struct(s);
    sfRenderWindow_setMouseCursorVisible(window, 0);
    (!window) ? my_exit(84) : 0;
    sfRenderWindow_setFramerateLimit(window, 40);
    while (sfRenderWindow_isOpen(window)){
        if (s->rest->vie_joueur > 0 && s->rest->kills < 40) {
            game_loop(s, window, clock, event);
        } else if (s->rest->kills >= 40 && s->rest->vie_joueur > 0)
            win_screen(window, s, event);
        else
            loose_screen(window, s, event);
    }
    destroy2(s->sound, window);
}