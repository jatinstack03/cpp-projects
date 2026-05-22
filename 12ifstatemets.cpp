#include<iostream>

int main() 
{
    //if statemets :- DO SOMETHING IF A CONDITION IS TRUE.
    //                IF NOT, THAN DONT'T DO IT.


    int age; 
    std::cout << "Enter your age:";

    std::cin >> age;
    if (age >=18){
        std::cout<< "ENTER YOUU AGE  :";
    }
    else if(age ==0) {
        std::cout << "YOU HAVEN'T BEEN BORN YET ! ";
    }
    else {
     std :: cout << "YOU ARE NOT OLD ENOUGH TO ENTER  ! ";

    }
    return 0;

}