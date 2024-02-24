#include <stdio.h>

int main() {
    double a, b;   
    printf("Введіть значення a: ");
    scanf("%lf", &a);
    printf("Введіть значення b: ");
    scanf("%lf", &b);

    
    double *ptr_a = &a;
    double *ptr_b = &b;
    
    
    double temp = *ptr_a;
	  double TEMP = *ptr_b;  
    *ptr_b = temp;
	 *ptr_a = TEMP;   
    printf("Результат:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    return 0;
}
