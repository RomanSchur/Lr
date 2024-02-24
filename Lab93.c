#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define STACK_SIZE 50
int stack[STACK_SIZE];
int top = -1;
void push(int value) {
    stack[++top] = value;
}
int koder() {
    return stack[top--];
}
void displayTop() {
    if (top >= 0) {
        printf("Value: %d\n", stack[top]);
    } else {
        printf("Error: Stack is empty\n");
    }
}
int main() {
    char input[100];
    int operand;
    printf("Enter RPN expression:\n");
    while (scanf("%s", input) == 1) {
        if (sscanf(input, "%d", &operand) == 1) {
            push(operand);
        } else {
            switch (input[0]) {
                case '=':
                    displayTop();
                    top = -1;
                    break;
                case '+':
                    push(koder() + koder());
                    break;
                case '-':
                    operand = koder();
                    push(koder() - operand);
                    break;
                case '*':
                    push(koder() * koder());
                    break;
                case '/':
                    operand = koder();
                    push(koder() / operand);
                    break;
                case '^':
                    operand = koder();
                    push(pow(koder(), operand));
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    return 1;  
            }
        }
    }

    return 0;
}


