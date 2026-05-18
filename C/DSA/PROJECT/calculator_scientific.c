#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("Select operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("7. Exit\n");
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

double squareRoot(double a) {
    if (a < 0) {
        printf("Error: Square root of negative number.\n");
        return 0;
    }
    return sqrt(a);
}

double power(double base, double exp) {
    return pow(base, exp);
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting...\n");
            break;
        }

        switch (choice) {
            case 1: // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 3: // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 5: // Square Root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = squareRoot(num1);
                printf("Result: %.2lf\n", result);
                break;

            case 6: // Power
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            default:
                printf("Error: Invalid choice. Please try again.\n");
                break;
        }
        printf("\n");
    }

    return 0;
}
