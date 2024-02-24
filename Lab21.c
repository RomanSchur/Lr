#include <stdio.h>

int main() {
    printf("Введіть символи: ");

    int symbol;
	 
     printf("The symbols are:");
    while ((symbol = getchar()) != '\n') {		
        if (symbol != ' ') {
            putchar(symbol);
            putchar(' ');			
        }
    }
 
    return 0;
}
