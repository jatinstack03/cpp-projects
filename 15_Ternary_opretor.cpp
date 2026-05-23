#include<iostream>

int main() 
{
    //ternary oprator ?: = replacement to an if/else statement 
    //condition ? expression1 : expression2;

    int grade = 70;
    grade >=50 ? std::cout << "CONGRATILATION Your Pass! \n " : std::cout << "Your Failed! \n";

    int  number = 3;
    number % 2 == 1 ? std::cout << "ODD \n" : std::cout << "even " << std::endl;

    bool hungry = true;
    hungry == true ? std::cout << "You Are Hungry \n" : std::cout << "Your Not Hungry " << std::endl;
    
    
    //std::cout << (hungry ? "you are hungry" : "you are full");
    return 0;
}