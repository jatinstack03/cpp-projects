#include<iostream>

int main() 
{
    // do while loop = DO SOME BLOCK OF CODE FIRST,
    //    THEN REPEAT AGAIN IF CONDITION IS TRUE.
    
    int number;

    do {std::cout << "enter a positve #: ";
    std::cin >> number;
    }
    while(number < 0); 
    {
        std::cout << "enter a positve #: ";
        std::cin >> number;

    }
     
    std::cout << "The # is: " << number;


    return 0;
    



}