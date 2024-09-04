// array_insert_solution_modular.c
// This program demonstrates how to insert an element into an array at the end, beginning,
// and a specified index with independent testing for each function.

#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

// Function prototypes
void insertAtEnd(int arr[], int element);
void insertAtBeginning(int arr[], int element);
void insertAtIndex(int arr[], int element, int index);
void printArray(int arr[]);

// Test functions
void testInsertAtEnd();
void testInsertAtBeginning();
void testInsertAtIndex();

int main() {
    // Run test functions
    testInsertAtEnd();
    testInsertAtBeginning();
    testInsertAtIndex();

    return 0;
}

// Function to insert an element at the end of the array
void insertAtEnd(int arr[], int element) {
    //TODO: Complete this function to insert an element at the end of the array using inputs arr and element
    





}

// Function to insert an element at the beginning of the array
void insertAtBeginning(int arr[], int element) {
    //TODO: Complete this function to insert an element at the beginning of the array using inputs arr and element
    






}

// Function to insert an element at a specified index in the array
void insertAtIndex(int arr[], int element, int index) {
    //TODO: Complete this function to insert an element at the end of the array using inputs arr, element, and index
    





}

//--------------------------------------------DONT CHANGE THE CODE UNDERNEATH THIS-----------------------------------------

// Function to print the array
void printArray(int arr[]) {
    for (int i = 0; arr[i] != 0; i++) {  // Assuming unused positions are 0
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Test function for insertAtEnd
void testInsertAtEnd() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};  // Pre-populated array
    int element = 60;  // Element to insert

    printf("Testing insertAtEnd:\n");
    insertAtEnd(arr, element);
    printArray(arr);  // Expected output: 10 20 30 40 50 60
}

// Test function for insertAtBeginning
void testInsertAtBeginning() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};  // Pre-populated array
    int element = 5;  // Element to insert

    printf("Testing insertAtBeginning:\n");
    insertAtBeginning(arr, element);
    printArray(arr);  // Expected output: 5 10 20 30 40 50
}

// Test function for insertAtIndex
void testInsertAtIndex() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};  // Pre-populated array
    int element = 25;  // Element to insert
    int index = 2;  // Index to insert at

    printf("Testing insertAtIndex:\n");
    insertAtIndex(arr, element, index);
    printArray(arr);  // Expected output: 10 20 25 30 40 50
}