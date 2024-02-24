#include <stdio.h>
int koder(int Matrix[5][5]) {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            suma += Matrix[i][j];
        }
    }
    return suma;
}
int main() {    
    int Matrix[5][5];   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 && j == 1) {
                Matrix[i][j] = 1;
            } else if (i == 0 && j == 0) {
                Matrix[i][j] = 1;
            } else if (i == 4 && j == 0) {
               Matrix[i][j] = 1;
            } else if (i == 4 && j == 4) {
               Matrix[i][j] = 1;
            } else if (i == 0 && j == 4) {
               Matrix[i][j] = 1;
            } else if (i == 2 && j == 2) {
               Matrix[i][j] = 0;
            } else {
                Matrix[i][j] = i;
            }        
        }
    }    
    printf("Масив:\n");
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
	 }
    int sum = koder(Matrix);
    printf("\nСума : %d\n", sum);
    return 0;
}
