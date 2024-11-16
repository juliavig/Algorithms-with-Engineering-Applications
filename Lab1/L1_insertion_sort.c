#include <stdio.h>
#include <stdlib.h>

#define N 10  // Define N as the size of the array

// Function to print the array
void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Insertion sort function
void insertion_sort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;
        
        // Shift elements of A[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main() {
    int arr[N];  // Declare the array

    printf("Lab 1 – insertion sort\n");

    // Populate the array with random values in the range 0 to 127
    for (int i = 0; i < N; i++) {
        arr[i] = rand() >> 24;  // Right shift by 24 bits to get a value between 0 and 127
    }

    // Print the list before sorting
    printf("List before sorting:\n");
    print_array(arr, N);

    // Perform the insertion sort
    insertion_sort(arr, N);

    // Print the list after sorting
    printf("List after sorting:\n");
    print_array(arr, N);

    return 0;
}
