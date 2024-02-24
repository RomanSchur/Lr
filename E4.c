#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    printf("Введіть кількість членів n: ");
    scanf("%d", &n);

    double sum = 0;

    for (int i = 0; i <= n; i++) {
        //double a = pow(-1,i+1) * pow(x, 2*i - 2);
		double a = pow(-1,i+1) * pow(x, 2*i - 1)/(2*i-1);
		//double a = pow(-1,i+1) * pow(1)/(2i-1);
		
		
        sum += a;
    }

    printf("Результат: %lf\n", sum);

    return 0;
}