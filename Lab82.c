#include <stdio.h>

char *my_gets(char *st, int n) {
    char *ret_val = st;
    if (fgets(st, n, stdin)) {
        while (*st != '\n' && *st != '\0') {
            st++;
        }
        if (*st == '\n') {
            *st = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
int main() {
    char a [100];
    my_gets(a, sizeof(a));
    printf("Input: %s\n", a);

    return 0;
}
