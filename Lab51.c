#include <stdio.h>
#include <math.h>

// Функція для розрахунку площі та довжини кола
void koder(double R, double *area, double *circumference) {	
    *area = 3.14 * pow(R, 2);
    *circumference = 2 * 3.14 * R;
}

int main() {
    double radius, area, circumference;

    // Введення радіусу з консолі
    printf("Введіть радіус кола: ");
    scanf("%lf", &radius);

    // Розрахунки за допомогою функції та вказівників
    koder(radius, &area, &circumference);

    // Виведення результатів
    printf("Площа кола: %.2f\n", area);
    printf("Довжина кола: %.2f\n", circumference);

    return 0;
}
