#include <stdio.h>
#include <ctype.h>

int main() {
    char Symbol;

    printf("Введіть букву: ");
    scanf(" %c", &Symbol); // Зверніть увагу на пробіл перед %c.

    if (isalpha(Symbol)) {
        printf("Ви ввели літеру алфавіту.\n");
    } else if (isspace(Symbol)) {
        printf("Ви ввели пробіл.\n");
    } else {
        printf("Введений символ, який не є літерою алфавіту.\n");
    }

    return 0;
}
