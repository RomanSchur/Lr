#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;   
    fp1 = fopen("C:\\Users\\user\\Desktop\\Практика\\LABA10\\Laba102Op\\jerky.txt", "r");
    fp2 = fopen("C:\\Users\\user\\Desktop\\Практика\\LABA10\\Laba102Op\\terky.txt", "w");    
    ch = getc(fp1);    
    fprintf(fp2, "%c \n", ch);     
    fclose(fp1);
    fclose(fp2);
    return 0;
}
