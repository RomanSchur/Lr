#include <stdio.h>

int main() {
    int a; 
	int b;
    char Stop;

    do {
        printf("Введіть числа a та b: ");
        scanf("%d %d", &a, &b);

     printf("Результат порівняння: %d ", a);
     printf("%c ", (a == b) ? '=' : (a > b) ? '>' : '<');
     printf("%d\n", b);
        printf("Для того щоб завершити натисніть 'x' ");
        scanf(" %c", &Stop);
    } while (Stop != 'x');

    return 0;
}
