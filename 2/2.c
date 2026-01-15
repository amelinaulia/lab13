#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");

    char name[40];
    char shortName[40];
    char greeting[100];

    puts("Пожалуйста, введите ваше имя:");
    scanf("%39s", name);


    strncpy(shortName, name, 3);
    shortName[3] = '\0';

    strcat(shortName, "...");


    strcpy(greeting, "Привет, ");
    strcat(greeting, shortName);


    int len = strlen(greeting);


    puts(greeting);
    return 0;
}