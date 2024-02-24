#include <stdio.h>
#include <math.h>

int main() {
    char продовжити;
    
    do {
        double a;
        double b;
        double c;
        printf("Введіть коефіцієнт a: ");
        scanf("%lf", &a);
        printf("Введіть коефіцієнт b: ");
        scanf("%lf", &b);
        printf("Введіть коефіцієнт c: ");
        scanf("%lf", &c);

        double D = b * b - 4 * a * c;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            printf("Корені рівняння: x1 = %.2lf і x2 = %.2lf\n", x1, x2);
        } else if (D == 0) {
            double x = -b / (2 * a);
            printf("Рівняння має один корінь: x = %.2lf\n", x);
        } else {
            printf("Рівняння не має дійсних коренів.\n");
        }
        
        printf("Щоб задати нові змінні введіть 'E': ");
        scanf(" %c", &продовжити);
    } while (продовжити == 'E');

    return 0;
}
