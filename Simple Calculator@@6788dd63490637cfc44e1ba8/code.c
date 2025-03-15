#include <stdio.h>

int main() {
    int a, b;
    char c;  // Declare the operator before reading it

    // Step 1: Take first number as input
    printf("Enter first number: ");
    scanf("%d", &a);

    // Step 2: Take operator input (with space before %c to remove newline issue)
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &c);  // FIX: Space before %c to remove input buffer issue

    // Step 3: Take second number as input
    printf("Enter second number: ");
    scanf("%d", &b);

    // Step 4: Perform calculation based on operator
    if (c == '+') {
        printf("Result: %d\n", a + b);
    } 
    else if (c == '-') {
        printf("Result: %d\n", a - b);
    } 
    else if (c == '*') {
        printf("Result: %d\n", a * b);
    } 
    else if (c == '/') {
        if (b != 0) {  // Prevent division by zero
            printf("Result: %d\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
