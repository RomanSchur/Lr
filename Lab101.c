#include <stdio.h>
#include <math.h>
int main() {
    int a; 
    int  b;  
    int  c;   
    printf("Введіть значення a, b, c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == 0) {
        printf("Помилка: a не може бути рівним 0.\n");
    } else {
        double D = pow(b, 2) - 4 * a * c;        
        printf("Дискримінант дорівнює: %lf\n", D);
        if (D < 0) {
            printf("Розв'язків немає (дискримінант менше 0).\n");
        } else {           
            double X1 = (-b - sqrt(D)) / (2* a);  
            double X2 = (-b + sqrt(D)) / (2 * a);            
            printf("X1 = %lf\n", X1);
            printf("X2 = %lf\n", X2);
		 FILE *fp;
        fp = fopen("C:/Users/user/Desktop/Практика/LabaOP.txt", "w");

		  fprintf(fp, "X1 = %lf\n", X1);
          fprintf(fp, "X2 = %lf\n", X2);

          fclose(fp);
          printf("Результати успішно записано у файл.\n");
        }
    }
    return 0;
}
