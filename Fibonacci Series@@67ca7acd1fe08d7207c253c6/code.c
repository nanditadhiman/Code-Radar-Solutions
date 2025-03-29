#include <stdio.h>

// Function to compute Fibonacci using recursion
int fibonacciSeries(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    for (int i = 0; i < n; i++) {
        printf("%d\t", fibonacciSeries(i));
    }
    printf("\n"); // Formatting for clean output

    return 0;
}

// Recursive Fibonacci function
int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}
