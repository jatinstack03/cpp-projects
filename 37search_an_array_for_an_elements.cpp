#include<iostream> // include the input-output stream library

// function prototype for searchArray
int searchArray(int array[], int size, int element);

int main() 
{
    // declare and initialize an array of integers
    int numbers[] = {1,2,3,4,5,6,7,8};

    // calculate the number of elements in the array
    int size = sizeof(numbers)/sizeof(numbers[0]);

    // variable to store the index of the found element
    int index;

    // variable to store the user input number
    int myNum;

    // prompt the user to enter a number to search
    std::cout << "Enter element to search for: " << "\n";

    // take input from the user
    std::cin >> myNum;

    // call the searchArray function to find the index of the entered number
    index = searchArray(numbers, size, myNum);

    // check if the element was found
    if(index != -1)
    {
        // print the element and its index if found
        std::cout << myNum << " is at index " << index << "\n";
    }
    else
    {
        // print that the element is not in the array
        std::cout << myNum << " is not in array" << "\n";
    }

    // return 0 to indicate successful program termination
    return 0;
}

// function definition for searching an element in the array
int searchArray(int array[], int size, int element)
{
     // loop through the array
     for(int i = 0; i < size; i++)
     {
        // check if the current element matches the target
        if(array[i] == element){
            return i; // return the index if found
        }
     }

     // return -1 if the element is not found in the array
     return -1;
}
