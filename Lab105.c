#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 256
int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Використання: %s <символ> <ім'я_файлу>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    char targetChar = argv[1][0];  
    char filename[MAX_LINE_LENGTH];
    FILE *file;
    strcpy(filename, argv[2]);  
    file = fopen(filename, "r");   
    char line[MAX_LINE_LENGTH];
    while (fgets(line, sizeof(line), file) != NULL) {        
        if (strchr(line, targetChar) != NULL) {
            printf("%s", line); 
        }
    }
    fclose(file);
    return 0;
}
