#include <stdio.h>

// Function Declarations
void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main() {
    int n;
    
    // Take array size as input
    scanf("%d", &n);
    
    int arr[n];  // Declare array dynamically based on input
    
    // Print the entered size
    printf("%d\n", n);
    
    // Take array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverse(arr, n);

    // Print the reversed array
    printarr(arr, n);

    return 0;
}

// Function to Print Array
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]); // Print each number in a new line
    }
}

// Function to Reverse Array
void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
