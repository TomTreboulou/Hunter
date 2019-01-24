/*
** EPITECH PROJECT, 2018
** main
** File description:
** csfml
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

int main(int ac, char **av)
{
    size_t count;
    sfEvent event;

    if (ac == 1) {
        launch_game(count, event);
    } else {
        if (av[1][0] == '-' && av[1][1] == 'h')
            dash_h();
    }
    return (EXIT_SUCCESS);
}