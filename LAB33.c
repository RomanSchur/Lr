
#include <stdio.h>
#include <math.h>
double COS(double x) {
    double res;
    res = cos(x);
    return res;
  }
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
float formula(double x) {
    float sum = 0.0;
    for (int i = 0; i <= 10; i++) {
        float term = pow(-1, i) * (pow(x, 2 * i) / factorial(2 * i));
        sum += term;
    }
    return sum;
}
int main() { 
   printf(" x  cos(x)  cos(x) \n");    
      for(double x = 0.1; x <=1; x=x+0.1){
        float Res = formula(x);
        float result = COS(x);
        printf(" %.1f  %.3f  %.3f \n", x,result,Res);
}
}


