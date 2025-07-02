#include <stdio.h>

int main() {
    float a, b;
    char op;
    char choice;

    do {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);  // Notice the space before %c

        switch(op) {
            case '+':
                printf("Result: %.2f\n", a + b);
                break;
            case '-':
                printf("Result: %.2f\n", a - b);
                break;
            case '*':
                printf("Result: %.2f\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("Result: %.2f\n", a / b);
                else
                    printf("Error: Cannot divide by zero\n");
                break;
            default:
                printf("Invalid operator\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator exited. Thank you!\n");
    return 0;
}
