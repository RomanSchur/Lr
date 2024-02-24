#include <stdio.h>
#define MAX_WORD_LENGTH 50
void koder(char arr[][MAX_WORD_LENGTH], int Rows, int num) {
    printf("%d слова з кожного рядка:\n", num);
    for (int i = 0; i < Rows; i++) {
        int j = 0;
        int count = 0;
        while (arr[i][j] != '\0' && count < num) {
            if (arr[i][j] == ' ') {
                count++;
            }
            putchar(arr[i][j]);
            j++;
        }
        putchar('\n');
    }
}
int main() {
    char arr[3][MAX_WORD_LENGTH] = {
        "Перший рядок завдання",
        "Другий рядок завдання",
        "Третій рядок завдання",
    };
    int num;
    printf("Введіть кількість слів: ");
    scanf("%d", &num);
    
    koder(arr, 3, num);
    return 0;
}
