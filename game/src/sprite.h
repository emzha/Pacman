#pragma once

/*
 * Liste des sprites dans l'ordre de leur apparition sur l'image
 * Les sprites des joueurs doivent suivre l'ordre de l'enum Direction
 *
 */

//Nombre d'image d'animation par type de joueur
#define EYES_MONSTER_FRAMES 1
#define WEAK_MONSTER_FRAMES 2
#define MONSTER_FRAMES 4
#define PLAYER_FRAMES 4

/**
 * @brief Noms des sprites
 */
enum Sprite {
        EMPTY_CELL,
        CELL,
        PATH,
        DIAGONAL_PATH,
        CHEESE,
        TOMATO,
        HAM,
        MUSHROOM,
    
        LEFT_RED_PINEAPPLE_1,
        LEFT_UP_RED_PINEAPPLE_1,
        UP_RED_PINEAPPLE_1,
        RIGHT_UP_RED_PINEAPPLE_1,
        RIGHT_RED_PINEAPPLE_1,
        RIGHT_DOWN_RED_PINEAPPLE_1,
        DOWN_RED_PINEAPPLE_1,
        LEFT_DOWN_RED_PINEAPPLE_1,
        LEFT_RED_PINEAPPLE_2,
        LEFT_UP_RED_PINEAPPLE_2,
        UP_RED_PINEAPPLE_2,
        RIGHT_UP_RED_PINEAPPLE_2,
        RIGHT_RED_PINEAPPLE_2,
        RIGHT_DOWN_RED_PINEAPPLE_2,
        DOWN_RED_PINEAPPLE_2,
        LEFT_DOWN_RED_PINEAPPLE_2,
        LEFT_RED_PINEAPPLE_3,
        LEFT_UP_RED_PINEAPPLE_3,
        UP_RED_PINEAPPLE_3,
        RIGHT_UP_RED_PINEAPPLE_3,
        RIGHT_RED_PINEAPPLE_3,
        RIGHT_DOWN_RED_PINEAPPLE_3,
        DOWN_RED_PINEAPPLE_3,
        LEFT_DOWN_RED_PINEAPPLE_3,
        LEFT_RED_PINEAPPLE_4,
        LEFT_UP_RED_PINEAPPLE_4,
        UP_RED_PINEAPPLE_4,
        RIGHT_UP_RED_PINEAPPLE_4,
        RIGHT_RED_PINEAPPLE_4,
        RIGHT_DOWN_RED_PINEAPPLE_4,
        DOWN_RED_PINEAPPLE_4,
        LEFT_DOWN_RED_PINEAPPLE_4,

        LEFT_CYAN_PINEAPPLE_1,
        LEFT_UP_CYAN_PINEAPPLE_1,
        UP_CYAN_PINEAPPLE_1,
        RIGHT_UP_CYAN_PINEAPPLE_1,
        RIGHT_CYAN_PINEAPPLE_1,
        RIGHT_DOWN_CYAN_PINEAPPLE_1,
        DOWN_CYAN_PINEAPPLE_1,
        LEFT_DOWN_CYAN_PINEAPPLE_1,
        LEFT_CYAN_PINEAPPLE_2,
        LEFT_UP_CYAN_PINEAPPLE_2,
        UP_CYAN_PINEAPPLE_2,
        RIGHT_UP_CYAN_PINEAPPLE_2,
        RIGHT_CYAN_PINEAPPLE_2,
        RIGHT_DOWN_CYAN_PINEAPPLE_2,
        DOWN_CYAN_PINEAPPLE_2,
        LEFT_DOWN_CYAN_PINEAPPLE_2,
        LEFT_CYAN_PINEAPPLE_3,
        LEFT_UP_CYAN_PINEAPPLE_3,
        UP_CYAN_PINEAPPLE_3,
        RIGHT_UP_CYAN_PINEAPPLE_3,
        RIGHT_CYAN_PINEAPPLE_3,
        RIGHT_DOWN_CYAN_PINEAPPLE_3,
        DOWN_CYAN_PINEAPPLE_3,
        LEFT_DOWN_CYAN_PINEAPPLE_3,
        LEFT_CYAN_PINEAPPLE_4,
        LEFT_UP_CYAN_PINEAPPLE_4,
        UP_CYAN_PINEAPPLE_4,
        RIGHT_UP_CYAN_PINEAPPLE_4,
        RIGHT_CYAN_PINEAPPLE_4,
        RIGHT_DOWN_CYAN_PINEAPPLE_4,
        DOWN_CYAN_PINEAPPLE_4,
        LEFT_DOWN_CYAN_PINEAPPLE_4,

        LEFT_PINK_PINEAPPLE_1,
        LEFT_UP_PINK_PINEAPPLE_1,
        UP_PINK_PINEAPPLE_1,
        RIGHT_UP_PINK_PINEAPPLE_1,
        RIGHT_PINK_PINEAPPLE_1,
        RIGHT_DOWN_PINK_PINEAPPLE_1,
        DOWN_PINK_PINEAPPLE_1,
        LEFT_DOWN_PINK_PINEAPPLE_1,
        LEFT_PINK_PINEAPPLE_2,
        LEFT_UP_PINK_PINEAPPLE_2,
        UP_PINK_PINEAPPLE_2,
        RIGHT_UP_PINK_PINEAPPLE_2,
        RIGHT_PINK_PINEAPPLE_2,
        RIGHT_DOWN_PINK_PINEAPPLE_2,
        DOWN_PINK_PINEAPPLE_2,
        LEFT_DOWN_PINK_PINEAPPLE_2,
        LEFT_PINK_PINEAPPLE_3,
        LEFT_UP_PINK_PINEAPPLE_3,
        UP_PINK_PINEAPPLE_3,
        RIGHT_UP_PINK_PINEAPPLE_3,
        RIGHT_PINK_PINEAPPLE_3,
        RIGHT_DOWN_PINK_PINEAPPLE_3,
        DOWN_PINK_PINEAPPLE_3,
        LEFT_DOWN_PINK_PINEAPPLE_3,
        LEFT_PINK_PINEAPPLE_4,
        LEFT_UP_PINK_PINEAPPLE_4,
        UP_PINK_PINEAPPLE_4,
        RIGHT_UP_PINK_PINEAPPLE_4,
        RIGHT_PINK_PINEAPPLE_4,
        RIGHT_DOWN_PINK_PINEAPPLE_4,
        DOWN_PINK_PINEAPPLE_4,
        LEFT_DOWN_PINK_PINEAPPLE_4,

        LEFT_YELLOW_PINEAPPLE_1,
        LEFT_UP_YELLOW_PINEAPPLE_1,
        UP_YELLOW_PINEAPPLE_1,
        RIGHT_UP_YELLOW_PINEAPPLE_1,
        RIGHT_YELLOW_PINEAPPLE_1,
        RIGHT_DOWN_YELLOW_PINEAPPLE_1,
        DOWN_YELLOW_PINEAPPLE_1,
        LEFT_DOWN_YELLOW_PINEAPPLE_1,
        LEFT_YELLOW_PINEAPPLE_2,
        LEFT_UP_YELLOW_PINEAPPLE_2,
        UP_YELLOW_PINEAPPLE_2,
        RIGHT_UP_YELLOW_PINEAPPLE_2,
        RIGHT_YELLOW_PINEAPPLE_2,
        RIGHT_DOWN_YELLOW_PINEAPPLE_2,
        DOWN_YELLOW_PINEAPPLE_2,
        LEFT_DOWN_YELLOW_PINEAPPLE_2,
        LEFT_YELLOW_PINEAPPLE_3,
        LEFT_UP_YELLOW_PINEAPPLE_3,
        UP_YELLOW_PINEAPPLE_3,
        RIGHT_UP_YELLOW_PINEAPPLE_3,
        RIGHT_YELLOW_PINEAPPLE_3,
        RIGHT_DOWN_YELLOW_PINEAPPLE_3,
        DOWN_YELLOW_PINEAPPLE_3,
        LEFT_DOWN_YELLOW_PINEAPPLE_3,
        LEFT_YELLOW_PINEAPPLE_4,
        LEFT_UP_YELLOW_PINEAPPLE_4,
        UP_YELLOW_PINEAPPLE_4,
        RIGHT_UP_YELLOW_PINEAPPLE_4,
        RIGHT_YELLOW_PINEAPPLE_4,
        RIGHT_DOWN_YELLOW_PINEAPPLE_4,
        DOWN_YELLOW_PINEAPPLE_4,
        LEFT_DOWN_YELLOW_PINEAPPLE_4,

        LEFT_WEAK_PINEAPPLE_1,
        LEFT_UP_WEAK_PINEAPPLE_1,
        UP_WEAK_PINEAPPLE_1,
        RIGHT_UP_WEAK_PINEAPPLE_1,
        RIGHT_WEAK_PINEAPPLE_1,
        RIGHT_DOWN_WEAK_PINEAPPLE_1,
        DOWN_WEAK_PINEAPPLE_1,
        LEFT_DOWN_WEAK_PINEAPPLE_1,
        LEFT_WEAK_PINEAPPLE_2,
        LEFT_UP_WEAK_PINEAPPLE_2,
        UP_WEAK_PINEAPPLE_2,
        RIGHT_UP_WEAK_PINEAPPLE_2,
        RIGHT_WEAK_PINEAPPLE_2,
        RIGHT_DOWN_WEAK_PINEAPPLE_2,
        DOWN_WEAK_PINEAPPLE_2,
        LEFT_DOWN_WEAK_PINEAPPLE_2,
        LEFT_EYES_PINEAPPLE,
        LEFT_UP_EYES_PINEAPPLE,
        UP_EYES_PINEAPPLE,
        RIGHT_UP_EYES_PINEAPPLE,
        RIGHT_EYES_PINEAPPLE,
        RIGHT_DOWN_EYES_PINEAPPLE,
        DOWN_EYES_PINEAPPLE,
        LEFT_DOWN_EYES_PINEAPPLE,

        LEFT_PIZZA_1,
        LEFT_UP_PIZZA_1,
        UP_PIZZA_1,
        RIGHT_UP_PIZZA_1,
        RIGHT_PIZZA_1,
        RIGHT_DOWN_PIZZA_1,
        DOWN_PIZZA_1,
        LEFT_DOWN_PIZZA_1,
        LEFT_PIZZA_2,
        LEFT_UP_PIZZA_2,
        UP_PIZZA_2,
        RIGHT_UP_PIZZA_2,
        RIGHT_PIZZA_2,
        RIGHT_DOWN_PIZZA_2,
        DOWN_PIZZA_2,
        LEFT_DOWN_PIZZA_2,
        LEFT_PIZZA_3,
        LEFT_UP_PIZZA_3,
        UP_PIZZA_3,
        RIGHT_UP_PIZZA_3,
        RIGHT_PIZZA_3,
        RIGHT_DOWN_PIZZA_3,
        DOWN_PIZZA_3,
        LEFT_DOWN_PIZZA_3,
        LEFT_PIZZA_4,
        LEFT_UP_PIZZA_4,
        UP_PIZZA_4,
        RIGHT_UP_PIZZA_4,
        RIGHT_PIZZA_4,
        RIGHT_DOWN_PIZZA_4,
        DOWN_PIZZA_4,
        LEFT_DOWN_PIZZA_4,

        TOMATO_SMUDGE,
        SPACE,
        COCAINE,
        DOOR,
        TELEPORTER_1,
        TELEPORTER_2,
        TELEPORTER_3,
        RETURN_KEY,
        SPRITE_FIN
};