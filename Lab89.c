#include <stdio.h>
char *koder(char *s1, const char *s2, size_t n) {
    char *result = s1;
    
    while (*s2 != '\0' && n > 0) {
        *s1 = *s2;
        s1++;
        s2++;
        n--;
    }
   
    while (n > 0) {
        *s1 = '\0';
        s1++;
        n--;
    }
    return result;
}
int main() {
    char s1[20];
    const char *s2 = "Hello, World!";
    size_t n = 7;    
    koder(s1, s2, n);   
    printf("s1 після копіювання: %s\n", s1);
    return 0;
}
