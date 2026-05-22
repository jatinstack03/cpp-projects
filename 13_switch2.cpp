#include<iostream>
int main () 
{
    int grade;

    std::cout << "what letter grade?: ";
    std::cin >> grade;


    switch(grade){
       case 'A':
       std::cout << "you did great ";
       break;

       case 'B':
       std::cout << "you did good ";
       break;

       case 'C':
       std::cout << "you did okay ";
       break;

       case 'D':
       std::cout << "you did not good ";
       break;

       case 'F':
       std::cout << "your failed ";
       break;

       default:
       std::cout << "palse enter letter between A yo F";
       break;

        return 0;
    }
}