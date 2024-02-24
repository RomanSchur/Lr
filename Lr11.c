#include <stdio.h>
int main() {
    int hours;
    double hourspain;
    double sum;    
    printf("Введіть кількість відпрацьованих годин: ");
    if (scanf("%d", &hours) != 1 || hours < 0) {
        printf("Невірне значення кількості годин.\n");
        return 1;
    }      
    printf("Введіть погодинну оплату: ");
    if (scanf("%lf", &hourspain) != 1 || hourspain < 0) {
        printf("Невірне значення погодинної оплати.\n");
        return 1;
    }
    sum = hours * hourspain;    
    printf("Сумарна заробітна плата: %.2lf\n", sum);    
    return 0;
}
