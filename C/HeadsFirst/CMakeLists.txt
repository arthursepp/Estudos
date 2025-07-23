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
        Exercicios/Ponteiros/Exe01/Exe01.c
        Exercicios/Ponteiros/Exe02/Exe02.c
        Exercicios/Ponteiros/Exe03/exe_03.c
        Exercicios/Strings/jukebox/jukebox.c
        Strings/arrays/arrays.c
        Strings/string_h/string_h.c
        Strings/strlen/strlen.c
)
