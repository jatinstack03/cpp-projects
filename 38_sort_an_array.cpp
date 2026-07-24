#include<iostream>

// Function prototype
void sort(int array[], int size);

int main() {
    // Initialize array
    int array[] = {3,2,1,5,4,7,6};
    int size = sizeof(array)/ sizeof(array[0]); // Calculate size of array

    sort(array, size); // Call sorting function

    // Print sorted array
    for(int element : array) {
        std::cout << element << '\n';
    }
    return 0;
}

// Bubble sort function
void sort(int array[], int size) {
    int temp;

    // Outer loop: number of passes
    for(int i = 0; i < size - 1; i++) {
        // Inner loop: compare adjacent elements
        for(int j = 0; j < size - i - 1; j++) {
            // Swap if elements are out of order
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
