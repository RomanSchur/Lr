#include <stdio.h>
void koder(int n) {    
    if (n < 10) {
        printf("%d ", n);
        return;
    }   
    printf("%d ", n % 10);
    koder(n / 10);
}
int main() {   
    int a;
    printf("Введіть число: ");
    scanf("%d", &a);    
    printf("Результат: ");
    koder(a);
    printf("\n");
    return 0;
}
