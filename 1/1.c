#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[50];
    char greeting[100];
    puts("Пожалуйста, введите ваше имя: ");
    scanf("%49s", name);
    // 1.2. 
    for (int i = 0; name[i] != '\0'; i++) {
        name[i] = toupper((unsigned char)name[i]);
    }

    strcpy(greeting, "Привет, ");
    strcat(greeting, name);

   //1.3
    int current_length = strlen(greeting);
    int dots_needed = 40 - current_length;

    if (dots_needed > 0) {
        for (int i = 0; i < dots_needed; i++) {
            strcat(greeting, "!");
        }
    }
    puts(greeting);
    return 0;
}