#include <stdio.h>

void KoderTR(int original[10][10], int res[10][10], int rows, int cols) {
    printf("\nТранспонована матриця:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            res[i][j] = original[j][i];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
void KoderSUM(int a[10][10], int b[10][10], int sum[10][10], int rows, int cols) {
    printf("\nСума матриць:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
int main(void) {
    int a[10][10];
    int b[10][10];
    int TR[10][10];
    int SUM[10][10];
    int r, c;
    printf("Введіть кількість рядків і стовбців:");
    scanf("%d %d", &r, &c);  
    printf("Введіть елементи матриці a:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Наступний елемент a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }   
    printf("Введіть елементи матриці b:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("Наступний елемент b%d%d:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    KoderTR(a, TR, r, c);
    KoderSUM(a, b, SUM, r, c);

    return 0;
}
