#include<iostream>

int main() 
{
    // sizeof() == DETERMINES THE SIZE IN BYTES OF A:
    //             VARABLE, DATA TYPE,CLASS,OBJECTS, ETC..
    
    std::string name = "bro is avsome";
    double gpa = 7.5;
    char grade = 'A';
    bool student = "true";

    std::cout << sizeof(gpa) << "\n";
    std::cout << sizeof(grade) << "\n";
    std::cout << sizeof(student) << "\n";
    



    return 0;

}