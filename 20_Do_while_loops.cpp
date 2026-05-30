#include<iostream>

int main() 
{
    // do while loop = DO SOME BLOCK OF CODE FIRST,
    //    THEN REPEAT AGAIN IF CONDITION IS TRUE.

    // a do-while loop is an exit-controlled loop that 
    //guarantees its internal code block will execute 
    //at least once before evaluating the termination condition. 
    
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