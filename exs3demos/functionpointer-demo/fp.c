#include <stdio.h>

// Function prototypes
int add(int a, int b);
int multiply(int a, int b);
void performOperation(int (*operation)(int, int), int x, int y);

int main() {
    int num1, num2;
    char operationChoice;

    // User input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Choose op (+,*): ");
    scanf(" %c", &operationChoice); 

    // Declare a function pointer
    int (*operation)(int, int) = NULL;

    // Select operation based on user choice
    if (operationChoice == '+') {
        operation = add; // Point to add function
    } else if (operationChoice == '*') {
        operation = multiply; // Point to multiply function
    } else {
        printf("Invalid operation!\n");
        return 1; // Exit if invalid operation
    }

    // Perform the operation
    performOperation(operation, num1, num2);

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b; // Return sum
}

int multiply(int a, int b) {
    return a * b; // Return product
}

void performOperation(int (*operation)(int, int), int x, int y) {
    int result = operation(x, y); // Call the function through the pointer
    printf("Result: %d\n", result);
}
