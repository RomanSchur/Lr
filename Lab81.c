#include <stdio.h>
char *ptr(char *str) {
    char *pc;
    pc = str;
    while (*pc)
        putchar(*pc++);
    do {
        putchar(*--pc);
    } while (pc - str);
    return (pc);
}
int main(){	
	char *x=ptr("Ho ho ho!");
	printf("\n%p",x);
}
