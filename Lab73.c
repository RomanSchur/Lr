#include <stdio.h>

void show1(const int arr1[], int n) {
    printf("show1(): ");
    for (int i = 0; i < n; i++) {
        printf("%.1d ", arr1[i]);
    }
    printf("\n");
}
void show2(const int arr2[][3], int n) {
    printf("show2():\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.1d ", arr2[i][j]);
        }
        printf("\n");
    }
}
int main() {   
    int *ptra = (int[]) {8, 3, 9, 2};    
    int(*ptrb)[3] = (int[][3]) {{8, 3, 9}, {5, 4, 1}};  
    show1(ptra, 4); 
    show2(ptrb, 2);  

    return 0;
}
