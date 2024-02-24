#include <stdio.h>

double koder(double *a, int length) {
    double sum = 0.0;
    for (int i = 0; i < length; i++) {
        sum += *(a + i);
    }
    double L = sum / length;
    return L;
}

int main(void) {
    double a[20] = {0.228952, 0.568418, 0.820277, 0.117099, 0.755212,
                    0.509299, 0.572073, 0.224526, 0.852861, 0.0612133,
                    0.175636, 0.568243, 0.0100543, 0.702012, 0.0345108,
                    0.146549, 0.189951, 0.144139, 0.261263, 0.474034};
    int length = sizeof(a) / sizeof(a[0]); 

    for (int i = 0; i < length; i++) {
        printf("%f\n", *(a + i));
    }

    printf("Розмір масиву = %d\n", length);
    printf("Середнє значення = %f\n", koder(a, length));
    return 0;
}
