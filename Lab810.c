#include <stdio.h>
char *string_in(const char *str1, const char *str2) {
    while (*str1 != '\0') {
        const char *p1 = str1;
        const char *p2 = str2;
        while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
            p1++;
            p2++;
        }
        if (*p2 == '\0') {
            printf("Рядок '%s' міститься у рядку '%s'. Починається з адреси %p.\n", str2, str1, (void *)str2);
            return (char *)str1;
        }
        str1++;
    }
    printf("Рядок '%s' не міститься у рядку '%s'.\n", str2, str1);
    return NULL;
}
int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "World";    
    string_in(str1, str2);
    return 0;
}
