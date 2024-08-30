#include <stdio.h>

// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void modulus(int a, int b);

int main() {
    int choice;
    double num1, num2;
    int int1, int2;

    while (1) {  // Infinite loop to keep the program running until the user chooses to exit
        // Display the menu
        printf("Calculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Please choose an option (1-6): ");

        // Read the user's choice
        scanf("%d", &choice);

        // Check if the user wants to exit
        if (choice == 6) {
            printf("Exiting the program.\n");
            break;  // Exit the loop and end the program
        }

        // Perform the selected operation
        switch (choice) {
            case 1:  // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                add(num1, num2);
                break;
            case 2:  // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                subtract(num1, num2);
                break;
            case 3:  // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                multiply(num1, num2);
                break;
            case 4:  // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                divide(num1, num2);
                break;
            case 5:  // Modulus
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                modulus(int1, int2);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
                break;
        }

        // Consume any leftover newline characters in the input buffer
        while (getchar() != '\n');
    }

    return 0;
}

// Function to perform addition
void add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

// Function to perform subtraction
void subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

// Function to perform multiplication
void multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

// Function to perform division
void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2lf\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// Function to perform modulus operation
void modulus(int a, int b) {
    if (b != 0) {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Modulus by zero is not allowed.\n");
    }
}

