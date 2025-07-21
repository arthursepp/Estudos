cmake_minimum_required(VERSION 3.31)
project(Estudos C)

set(CMAKE_C_STANDARD 23)

add_executable(Estudos cards/cards.c
        loops/loops.c
        functions/functions.c
        ponteiros/ponteiros.c
        ExercicioPonteiros/ExercicioPonteiros.c
        string/strings.c
        fgets/fgets.c
        cardsv2/cardsv2.c
        Exercicios/Ponteiros/Exe01/Exercicio1.c
)
