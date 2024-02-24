#include <stdio.h>
#define SWAP(a, b) {int tmp; tmp = a; a = b; b = tmp;}
void hoor(int *a, int left, int right);
void sort_change(int *a, int dim);
void sort_choose(int *a, int dim);
void print(int data[][5], int R, int S);
int main() {
    int data[4][5] = {{0, 8, 7, -1, 6},
                      {9, 7, -4, -2, 0},
                      {1, 8, 0, -6, 5},
                      {-87, 78, 23, 7, 2}};
    int R = 4;
    int S = 5;
    printf("Початковий масив:\n");
    print(data, R, S);
    for (int i = 0; i < R; i++) {
        hoor(data[i], 0, (S - 1));
    }
    printf("Після сортування методом Хоара:\n");
    print(data, R, S);

    for (int i = 0; i < R; i++) {
        sort_change(data[i], S);
    }
    printf("\nВідсортований масив за допомогою sort_change:\n");
    print(data, R, S);

    for (int i = 0; i < R; i++) {
        sort_choose(data[i], S);
    }
    printf("\nВідсортований масив за допомогою sort_choose:\n");
    print(data, R, S);

    return 0;
}
void hoor(int *a, int left, int right) {
    int i = left;
    int j = right;
    int step = -1;
    int condition = 1;
    if (left >= right)
        return;
    do {
        if (condition == (a[i] > a[j])) {
            SWAP(a[i], a[j]);
            SWAP(i, j);
            step *= -1;
            condition = !condition;
        }
        j += step;
    } while (j != i);
    hoor(a, left, i - 1);
    hoor(a, i + 1, right);
}
void sort_change(int *a, int dim) {
    for (int i = 0; i < dim; i++) {
        for (int j = dim - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                SWAP(a[j - 1], a[j]);
            }
        }
    }
}
void sort_choose(int *a, int dim) {
    for (int i = 0; i < dim; i++) {
        int k = i;
        for (int j = i + 1; j < dim; j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        SWAP(a[k], a[i]);
    }
}
void print(int data[][5], int R, int S) {
    printf("\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < S; j++) {
            printf("%4d", data[i][j]);
        }
        printf("\n");
    }
}
