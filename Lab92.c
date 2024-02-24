#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

// Змінено: Функція тепер повертає новий номер елемента
int initialize_number_generator(void) {
    srand((unsigned)time(NULL));
    return rand() % MAX_NUMBER + 1;
}

// Змінено: Функція тепер приймає secret_number як аргумент
void read_guesses(int secret_number) {
    int guess, num_guesses = 0;
    for (;;) {
        num_guesses++;
        printf("Enter guess:");
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("You won in %d guess!\n\n", num_guesses);
            return;
        } else if (guess < secret_number) {
            printf("Too low.\n");
        } else {
            printf("Too high.\n");
        }
    }
}

int main(void) {
    char command;
    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);

    do {
        // Змінено: secret_number тепер отримує значення від initialize_number_generator
        int secret_number = initialize_number_generator();
        printf("A new number has been chosen.\n");
        // Змінено: secret_number передається у функцію read_guesses
        read_guesses(secret_number);
        printf("Play again? (Y/N)");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'Y' || command == 'y');

    return 0;
}
