#include <stdio.h>
#include <math.h>

int main() { 
    int n; 
    double sum = 0.0; 

    printf("Введіть кількість елементів (n): "); 
    scanf("%d", &n); 

    for (int i = 1; i <= n; i++) { 
        double a = pow(-1, i + 1) / (2 * i - 1); 
        sum += a; 
    }

    printf("Сума перших %d членів послідовності: %lf\n", n, sum); 

    return 0;
}
