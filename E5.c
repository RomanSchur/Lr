#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    printf("Введіть кількість членів n: ");
    scanf("%d", &n);

    double s = 1;

    for (int i = 1; i <= n; i++) {
        double a = pow(-1,i+1) * pow(x, 2*i - 2);	
		
		
        s += a;
    }
	double c = 0;
     for (int i = 0; i <= n; i++) {        
		double b = pow(-1,i+1) * pow(x, 2*i - 1)/(2*i-1);	
		
		
        c += b;
    }
	double y = 0;
     for (int i = 0; i <= n; i++) {        
		double g = pow(-1,i+1) * (1)/(2*i-1);	
		
        y += g;
    }
    
    printf("Результат a: %lf\n", s);
	 printf("Результат b: %lf\n", c);
	 printf("Результат g: %lf\n", y);

    return 0;
}