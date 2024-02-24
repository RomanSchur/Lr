#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void shuffle(int *arr, int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(arr + i, arr + j);
    }
}

void shell(int *arr, int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            for (int j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap) {
                swap(&arr[j], &arr[j + gap]);
            }
        }
    }
}

void hoor(int *arr, int left, int right) {
    int i = left;
    int j = right;
    int step = -1;
    int condition = 1;
    if (left >= right)
        return;
    do {
        if (condition == (arr[i] > arr[j])) {
            swap(&arr[i], &arr[j]);
            swap(&i, &j);
            step *= -1;
            condition = !condition;
        }
        j += step;
    } while (j != i);
    hoor(arr, left, i - 1);
    hoor(arr, i + 1, right);
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    if (size < 10) {
        printf("Error! Incorrect size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    bubble(arr, size);
    printf("After bubble-sorting: ");
    printArray(arr, size);

    shuffle(arr, size);
    printf("After Shuffle-sorting: ");
    printArray(arr, size);

    shell(arr, size);
    printf("After Shell-sorting: ");
    printArray(arr, size);

    shuffle(arr, size);
    printf("After Shuffle-sorting: ");
    printArray(arr, size);

    hoor(arr, 0, size - 1);
    printf("After Hoor-sorting: ");
    printArray(arr, size);

    return 0;
}

  