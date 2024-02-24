#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_SIZE 5  
void koder(int arr[], int n) {
    printf("Новий масив: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void generateArray(int arr[], int n) {
    printf("Згенерований масив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 20;  
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[ARRAY_SIZE];
    int choice;
    printf("Оберіть спосіб заповнення масиву:\n");
    printf("1. Ввести самостійно\n");
    printf("2. Згенерувати автоматично\n");   
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Введіть %d елементів масиву:\n", ARRAY_SIZE);
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
    } else if (choice == 2) {        
        srand(time(NULL));
        generateArray(arr, ARRAY_SIZE);
    } else {       
        return 1;
    }
    koder(arr, ARRAY_SIZE);
    return 0;
}
