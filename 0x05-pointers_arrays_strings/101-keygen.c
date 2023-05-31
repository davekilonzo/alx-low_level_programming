#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generateRandomChar() {
    return 'a' + rand() % 26;
}

void generateRandomPassword(char *password) {
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(0));

    char password[PASSWORD_LENGTH + 1];
    generateRandomPassword(password);

    printf("Generated Password: %s\n", password);

    return 0;
}
