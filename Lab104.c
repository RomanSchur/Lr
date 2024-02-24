#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc == 2) {       
        char *fileName = argv[1];       
        FILE *file = fopen(fileName, "r"); 
               char ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }        
        fclose(file);
    } else if (argc == 1) {	        
        printf("Введіть ім'я файлу: ");
        char fileName[256]; 
		scanf("%255s", fileName);
        FILE *file = fopen(fileName, "r");       
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }        
        fclose(file);
    } else {        
        printf("Помилка");
        return 1;  
    }
    return 0;
}
