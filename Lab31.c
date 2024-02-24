#include <stdio.h>
void Conclusion(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void Left(int matrix[3][3]) {
    int temp[3][3];   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = temp[j][2 - i];
        }
    }
}
void Right(int matrix[3][3]) {
    int temp[3][3];    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = temp[2 - j][i];
        }
    }
}
void to180(int matrix[3][3]) {
    int temp[3][3];    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = temp[2 - i][2 - j];
        }
    }
}
void Vertical(int matrix[3][3]) {
    int temp[3][3];   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = temp[2 - i][j];
        }
    }
}
void Horizontal(int matrix[3][3]) {
    int temp[3][3];   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = temp[i][2 - j];
        }
    }
}
int main() {
    int num;
    int MAS[3][3] = {{3, -6, 8}, {4, 6, 6}, {4, -5, -2}};
        printf("Оберіть опцію\n");
        printf(" Вивести матрицю-1\n");
        printf(" Матриця вліво-2\n");
        printf(" Матриця вправо-3\n");
        printf(" Матриця на 180 градусів-4\n");
        printf(" Матриця по вертикалі-5\n");
        printf(" Mатриця по горизонталі-6\n");
        printf(" Завершити-0\n");
    do {
        printf("Введіть число: ");
        scanf("%d", &num);
        if (num == 1) {
            Conclusion(MAS);
        } else if (num == 2) {
            Left(MAS);
            Conclusion(MAS);
        } else if (num == 3) {
            Right(MAS);
           Conclusion(MAS);
        } else if (num == 4) {
            to180(MAS);
            Conclusion(MAS);
        } else if (num == 5) {
            Vertical(MAS);
            Conclusion(MAS);
        } else if (num == 6) {
            Horizontal(MAS);
           Conclusion(MAS);
        } else if (num == 0) {
            printf("-_-\n");
        } else {
            printf("Помилка.\n");
        }
    } while (num != 0);
    return 0;
}