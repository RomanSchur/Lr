#include <stdio.h>

int main() { 
char оцінка; 
    printf("___________________________________________________________________________________\n");
    printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");
	printf("___________________________________________________________________________________\n");
    printf("|          95...100        |           A            |              Відмінно        |\n");
	printf("___________________________________________________________________________________\n");
    printf("|         85...94          |           B            |               Добре          |\n");
	printf("___________________________________________________________________________________\n");
    printf("|          75...84         |           C            |               Добре          |\n");
	printf("___________________________________________________________________________________\n");	
    printf("|          65...74         |           D            |              Задовільно      |\n");
	printf("___________________________________________________________________________________\n");
    printf("|          60...64         |           E            |              Задовільно      |\n");
	printf("___________________________________________________________________________________\n");
    printf("|          0...60          |           Fx           |              Незадовільно    |\n");
	printf("___________________________________________________________________________________\n");
    printf("| не виконання умов допуску|           F            |              Не допущено     |\n");	
    printf("| до семестрового контролю |                        |                              |\n");
	printf("___________________________________________________________________________________\n");
	
	
	
     printf("Введіть свою буквенну оцінку(якщо у вас оцінка Fx,то введіть букву J): ");	 
    scanf(" %c", &оцінка);     
    switch (оцінка) {
        case 'A':
		    printf("___________________________________________________________________________________\n");
            printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");
            printf("|          95...100        |           A            |            Відмінно          |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'B':
		    printf("___________________________________________________________________________________\n");
		    printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");		
            printf("|         85...94          |           B            |             Добре            |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'C': 
		    printf("___________________________________________________________________________________\n");
	        printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");	
            printf("|          75...84         |           C            |             Добре            |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'D':
		    printf("___________________________________________________________________________________\n");
            printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");
            printf("|          65...74         |           D            |           Задовільно         |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'E':
            printf("___________________________________________________________________________________\n"); 		
	        printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");	
            printf("|          60...64         |           E            |           Задовільно         |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'J':
		    printf("___________________________________________________________________________________\n");
	        printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");	
            printf("|          0...60          |           Fx           |          Незадовільно        |\n");
			printf("___________________________________________________________________________________\n");
            break;
        case 'F':
		    printf("___________________________________________________________________________________\n");
            printf("|Бали за 100-бальною шкалою| Оцінка за шкалою ЄКТС  | Оцінка за національною шкалою|\n");		
            printf("| не виконання умов допуску|           F            |           Не допущено        |\n");
			printf("___________________________________________________________________________________\n");
            break;
        default:
            printf("Введена некоректна оцінка\n");
    }

    return 0;
}