#include <stdio.h>
#define MAX_WORD_LENGTH 50  
void koder(char arr[3][MAX_WORD_LENGTH]) {
    printf("Перші слова з кожного рядка:\n");
    for (int i = 0; i < 3; i++) {
        int j = 0;
        char firstWord[MAX_WORD_LENGTH];
        while (arr[i][j] != ' ' && arr[i][j] != '\0') {
            firstWord[j] = arr[i][j];
            j++;
        }
        firstWord[j] = '\0';
        printf("%s\n", firstWord);
    }
}
int main() {
    char arr[3][MAX_WORD_LENGTH] = {
        "Перший рядок",
        "Другий рядок",
        "Третій рядок",
    };   
    koder(arr);
    return 0;
}
