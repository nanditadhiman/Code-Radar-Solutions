#include <stdio.h>

// Function Declarations
void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main() {
    int n;
    
    // Take array size as input
    scanf("%d", &n);
    
    int arr[n];  // Declare array dynamically based on input
    
    // Take array elements as input
    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverse(arr, n);

    // Print the reversed array
    printf("%d\n",n);
    printarr(arr, n);

    return 0;
}

// Function to Print Array
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

// Function to Reverse Array
void reverse(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {  // Fixed syntax error
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
