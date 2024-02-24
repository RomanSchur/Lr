#include <stdio.h>

void koder(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }    
    printf("Третій масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}
int main() {
    const int n = 4;
    int arr1[] = {2, 4, 5, 8};
    int arr2[] = {1, 0, 4, 6};
    int result[n];   
    printf("Перший масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Другий масив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");  
    koder(arr1, arr2, result, n);
    return 0;
}
