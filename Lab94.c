#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll_count = 0;
static int rollem(int sides) {
    int roll = rand() % sides + 1;
    ++roll_count;
    return roll;
}
int roll_n_dice(int dice, int sides) {
    int d, total = 0;
    if (sides < 2) {
        fprintf(stderr, "Error: Number of sides should be at least 2.\n");
        return -2;
		}
    if (dice < 1) {
        fprintf(stderr, "Error: Number of dice should be at least 1.\n");
        return -1;
    }
    for (d = 0; d < dice; d++)
        total += rollem(sides);
    return total;
}
int main(void) {
    srand((unsigned int)time(0));
    int sides = 8;
    do {
        int dice, roll;
        printf("How many dice? ");
        if (scanf("%d", &dice) != 1 || dice < 1) {
            fprintf(stderr, "Error: Invalid input for the number of dice.\n");
            printf("Let's begin again.\n");
            while (getchar() != '\n')
                continue;
            continue;
        }
        roll = roll_n_dice(dice, sides);
        if (roll != -1 && roll != -2)
            printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
    } while (getchar() != 'q');     
    printf("GOOD\n");

    return 0;
}
