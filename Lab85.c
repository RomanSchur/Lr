#include <stdio.h>
void Koder(char array[], int N) {
    int i = 0;
    char c;
    printf("Введіть  сиволи :\n");
    while (i < N) {
        c = getchar();        
        if (c == '\n' ) {
            break;
        }       
        if (c == ' ' || c == '\t' || c == '\n') {
            break;
        }
        array[i++] = c;
    }   
    array[i] = '\0';
}
int main() {
    int N = 5; 
    char A[N];
    Koder(A, N);
    printf("Введений рядок: %s\n", A);
    return 0;
}
