#include <stdio.h>
void koder(char *array, int N) {
    int i = 0;
    char c;
    printf("Введіть %d символів:\n", N);
    while (i < N) {
        c = getchar();        
        if (c == '\n' ) {
            break;
        }
        array[i++] = c;
    }  
    array[i] = '\0';
}
int main() {
    int N = 5;
    char A[N];
    koder(A, N);
    printf("Введений рядок: %s\n", A);
    return 0;
}
