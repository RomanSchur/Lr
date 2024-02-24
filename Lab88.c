#include <stdio.h>
int koder(char symbol, const char *str) {
    while (*str != '\0') {
        if (*str == symbol) {
            printf("Символ '%c' знайдено у рядку.\n", symbol);
            return 1;
        }
        str++;
    }
    printf("Символ '%c' не знайдено у рядку.\n", symbol);
    return 0;
}
int main() {
    const char *A = "Hello, World!";
    char Symbol;
    printf("Введіть символ для пошуку: ");
    scanf(" %c", &Symbol);

    koder(Symbol, A);

    return 0;
}
