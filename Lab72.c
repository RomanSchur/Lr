#include <stdio.h>

int main() {
    int data[30][100];   
    int *addr_a = &data[22][56];   
    int *addr_b = &data[22][0];   
    int *addr_c = &data[0][0];   
    printf("Address of data[22][56]: %p\n", (void*)addr_a);
    printf("Address of data[22][0]: %p\n", (void*)addr_b);
    printf("Address of data[0][0]: %p\n", (void*)addr_c);

    return 0;
}
