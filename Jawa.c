#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    printf("Введіть кількість членів n: ");
    scanf("%d", &n);

    double result = 0;

    for (int i = 0; i <= n; i++) {
        double a =  pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1); // Виправлено помилки у формулі.
        result += a;
    }

    printf("Результат: %lf\n", result);

    return 0;
}
