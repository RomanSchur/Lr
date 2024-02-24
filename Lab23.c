#include <stdio.h>
#include <ctype.h>

int main() {
    char Symbols[100];
    
    printf("Введіть рядок: ");
    scanf("%s", Symbols);

    for (int i = 0; Symbols[i]; i++) {
        Symbols[i] = tolower(Symbols[i]);
    }

    printf("Перетворений рядок: %s\n", Symbols);

    printf("Введіть рядок: ");
    scanf("%s", Symbols);
    
    for (int i = 0; Symbols[i]; i++) {
        Symbols[i] = toupper(Symbols[i]);
    }

    printf("Перетворений рядок: %s\n", Symbols);

    return 0;
}
