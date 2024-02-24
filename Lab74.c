#include <stdio.h>
void koder(float arr[], int n, float *max, float *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
void Index(float arr[], int n, float max) {
    printf("Індекс максимального елемента %.2f: ", max);
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
void Difference(float min, float max) {
    printf("Різниця між найменшим і найбільшим елементами: %.2f\n", max - min);
}
int main() {
    int n;    
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);   
    float arr[n];     
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%f", &arr[i]);
    }    
    float max, min;    
    koder(arr, n, &max, &min);   
    Index(arr, n, max);
    Difference(min, max);

    return 0;
}
