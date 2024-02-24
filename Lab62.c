#include <stdio.h>
#include <string.h>

void filterString(char *line) {
    int i = 0; 
	int j;
    while (line[i] != '\0') {
        while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0')) {
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
        ++i;
    }
}
void sortStrings(char (*str)[50], int size) {
    char temp[50];
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
int main(void) {
    char line[100];
    printf("Введіть рядок: ");
    fgets(line, sizeof(line), stdin);
    filterString(line);
    char str[10][50];
    printf("Введіть слова:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%s", str[i]);
}
    sortStrings(str, 10);
    printf("\nВ лексикографічному порядку:\n");
    for (int i = 0; i < 10; ++i) {
        puts(str[i]);
    }
    printf("Вихідний рядок: %s\n", line);

    return 0;
}

  