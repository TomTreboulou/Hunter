
#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_
#include <SFML/Graphics.h>

typedef struct texture_s
{
    sfTexture *tex1;
    sfTexture *tex2;
    sfTexture *tex3;
    sfTexture *tex4;
    sfTexture *tex5;
    sfTexture *tex6;
    sfTexture *tex7;
    sfTexture *tex8;
    sfTexture *tex9;
    sfTexture *tex10;
    sfTexture *tex11;
    sfTexture *tex12;
    sfTexture *tex13;
    sfTexture *tex14;
    sfTexture *tex15;
    sfTexture *tex16;
    sfTexture *tex17;
    sfTexture *tex18;
    sfTexture *tex19;
    sfTexture *tex20;
} texture_t;

typedef struct sprite_s
{
    sfSprite* spr1;
    sfSprite* spr2;
    sfSprite* spr3;
    sfSprite* spr4;
    sfSprite* spr5;
    sfSprite* spr6;
    sfSprite* spr7;
    sfSprite* spr8;
    sfSprite* spr9;
    sfSprite* spr10;
    sfSprite* spr11;
    sfSprite* spr12;
    sfSprite* spr13;
    sfSprite* spr14;
    sfSprite* spr15;
    sfSprite* spr16;
    sfSprite* spr17;
    sfSprite* spr18;
    sfSprite* spr19;
    sfSprite* spr20;
} sprite_t;

typedef struct image_s
{
    sfImage* img1;
    sfImage* img2;
    sfImage* img3;
    sfImage* img4;
    sfImage* img5;
    sfImage* img6;
    sfImage* img7;
    sfImage* img8;
    sfImage* img9;
    sfImage* img10;
    sfImage* img11;
    sfImage* img12;
    sfImage* img13;
    sfImage* img14;
    sfImage* img15;
    sfImage* img16;
    sfImage* img17;
    sfImage* img18;
    sfImage* img19;
    sfImage* img20;
} image_t;

typedef struct vector_s
{
    sfVector2f vitesse1;
    sfVector2f f_bon;
    sfVector2f first_finish;
    sfVector2f explosion_ak;
    sfVector2f explosion_glock;
    sfVector2f weapon;
    sfVector2f scale;
    sfVector2f heart_pos;
    sfVector2i mouse_pos;
    sfVector2f s_bon;
    sfVector2f regle_pos;
    sfVector2f round_pos;
    sfVector2f middle_pos;
} vector_t;

typedef struct sound_s
{
    sfSoundBuffer* sound_ak;
    sfSound* ak;
    sfSoundBuffer* sound_glock;
    sfSound* glock;
}sound_t;

typedef struct rect_s
{
    sfIntRect rect;
    sfIntRect rect1;
} rect_t;

typedef struct rest_s
{
    int vie;
    int vie2;
    int check;
    int checkweapon;
    int vie_joueur;
    int kills;
} rest_t;

typedef struct struct_s
{
    vector_t *vector;
    image_t *image;
    sound_t *sound;
    sprite_t *sprite;
    texture_t *texture;
    rect_t *rect;
    rest_t *rest;
} struct_t;

void launch_game(size_t count, sfEvent event);
void game_loop(struct_t *s, sfRenderWindow *window, sfClock *clock,\
sfEvent event);
void game(struct_t *s, sfClock *clock, sfRenderWindow *window, sfEvent event);
void manage_weapon(struct_t *s, sfEvent event, sfRenderWindow *window);
void gun(sfEvent event, struct_t *s, sfRenderWindow *window);
void ak(sfEvent event, struct_t *s, sfRenderWindow *window);
void loose_screen(sfRenderWindow *window, struct_t *s, sfEvent event);
void win_screen(sfRenderWindow *window, struct_t *s, sfEvent event);
void init_struct(struct_t *s);
int dash_h(void);
void move(sprite_t *sprite, rect_t *rect, sfClock* clock);
void draw_important(sfRenderWindow *window, sprite_t *sprite);
void bon_1(vector_t *vector, sfRenderWindow *window, sprite_t *sprite,\
rest_t *rest);
void bon_2(vector_t *vector, sfRenderWindow *window, sprite_t *sprite,\
rest_t *rest);
void draw_important(sfRenderWindow *window, sprite_t *sprite);
int my_exit(int nb);
void sprite4(sprite_t *sprite, texture_t *texture, vector_t *vector);
void sprite3(sprite_t *sprite, texture_t *texture, vector_t *vector);
void init(rest_t *rest);
void rectangle(rect_t *rect);
void draw_regle(sfRenderWindow *window, sprite_t *sprite);
void clean(sfRenderWindow *window, sprite_t *sprite, rest_t *rest);
void clean2(sfRenderWindow *window, sprite_t *sprite, rest_t *rest);
int kill_b1(sfRenderWindow *window, vector_t *vector, rest_t *rest);
int kill_b2(sfRenderWindow *window, vector_t *vector, rest_t *rest);
int check_w(rest_t *rest, sfEvent event);
void move_rect2(rect_t *rect1, sfSprite **sprite8);
void destroy2(sound_t *sound, sfRenderWindow *window);
void sound2(sound_t *sound);
void sprite2(sprite_t *sprite, texture_t *texture, vector_t *vector);
void texture2(texture_t *texture, image_t *image);
void image2(image_t *image);
void vector2(vector_t *vector);
void move_rect(rect_t *rect, sfSprite **sprite6);
void spr1_esc_curs(sfRenderWindow *window, vector_t *vector, sprite_t *sprite,\
sfEvent event);
#endif