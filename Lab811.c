#include <stdio.h>
#include <string.h>
void reverse(const char *str);
int main() {
    char inputString[100];    
    printf("Введіть рядок: ");
    fgets(inputString, sizeof(inputString), stdin);    
    size_t length = strlen(inputString);   
    reverse(inputString);
    return 0;
}
void reverse(const char *str) {
    int length = strlen(str);    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
