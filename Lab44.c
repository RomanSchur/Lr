#include <stdio.h>
unsigned long long factorial(int a) {
    unsigned long long result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}
int main() {
	printf("Введіть число:");
	int a ;
	scanf("%d",&a);    
    unsigned long long res = factorial(a);
    printf("Факторіал числа %d: %llu\n", a, res);
    return 0;
}

