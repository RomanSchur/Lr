#include <stdio.h>
#include <string.h>

#define TEXT 100

void koder(char text[], int key, char encrypted[TEXT]) {    
    int index = 0; 
    for (int i = 0; i < key; i++) {
        for(int j = i; j < strlen(text); j += key) {
            encrypted[index++] = text[j];
        }
    }
    printf("Зашифроване слово: %s\n", encrypted); 
	}
int main() {
    char text[TEXT];
    printf("Введіть слово, яке бажаєте зашифрувати: ");	
    fgets(text, TEXT, stdin);
    int key = 5;
    char encrypted[TEXT] = {'\0'};   
    koder(text, key, encrypted);     
    return 0;
}
