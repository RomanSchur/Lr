#include <stdio.h>
#include <math.h>

double calculate_expression(double x, int n) {
    double result = 0;
    int i;
    for (i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i);
        result += term;
    }
    return result;
}

int main() {
    double x;
    int n;

    printf("Введіть значення x: ");
    scanf("%lf", &x);
    printf("Введіть кількість членів для обчислення: ");
    scanf("%d", &n);

    double result = calculate_expression(x, n);
    printf("Результат обчислення для x = %.2lf і %d членів: %.6lf\n", x, n, result);

    return 0;
}
