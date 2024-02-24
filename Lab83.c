#include <stdio.h>
int koder(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char *RD = "Hello, World!";
    printf("Довжина рядка: %d\n", koder(RD)); // Додано закриваючу дужку
    return 0;
}
