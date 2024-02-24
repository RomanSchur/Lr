#include <string.h>
#include <stdio.h>
#define TEXT 100

char text[TEXT];

void koder(char text[]) {
    printf("Зашифроване слово:\n");
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            printf("%c", (((text[i] - 'a') + 3) % 26) + 'a'); 
        } 
        else if (text[i] >= 'A' && text[i] <= 'Z') {
            printf("%c", (((text[i] - 'A') + 3) % 26) + 'A'); 
        }
        else {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

int main() { 
    printf("Введіть слово:");
    fgets(text, TEXT, stdin);
    koder(text);
    return 0;
}
