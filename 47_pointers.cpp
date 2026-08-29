#include<iostream>

int main() 
{
    //POINTER : VERIABLE THAT STORES A MEMORY ADDRESS  OF ANOTHER VARIABLE 
    //          SOMETIMES IT'S EASIER TO WORK WITH ADDRESS 

    //& ADDRESS-OF OPERATOR
    //* DEREFERENECE OPRATOR

    std::string name = "jatin";
    int age = 18;
    std::string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreepizzas = freePizzas;


    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreepizzas << '\n';

    return 0;

}