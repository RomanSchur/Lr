#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define TEXT 100
#define KAY 100
char text[TEXT];
char key[KAY];
void koder(char text[], char key[]) {
	printf("Закодоване слово: ");
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            int V = toupper(key[i % strlen(key)]) - 'A';
            printf("%c", (((text[i] - 'a')+V) % 26) + 'a');
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            int V = toupper(key[i % strlen(key)]) - 'A';
            printf("%c", (((text[i] - 'A' )+ V) % 26) + 'A');
        } 
    }
    printf("\n");
}
int main() {
	printf("Введіть слово,яке бажаєте зашифрувати: ");	
    fgets(text, TEXT, stdin);
	printf("Введіть слово,яке буде виконувати функцію ключа: ");
    fgets(key, KAY, stdin);
    koder(text, key);
    return 0;
}
