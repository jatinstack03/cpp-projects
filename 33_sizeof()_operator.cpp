#include<iostream>

int main() 
{
    // sizeof() == DETERMINES THE SIZE IN BYTES OF A:
    //             VARABLE, DATA TYPE,CLASS,OBJECTS, ETC..
    
    std::string name = "bro is avsome";
    double gpa = 7.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A','B','C','D','F'};
    std::string student[] = {"Jatin","himesh","harsh","mohit","bless","maan"};

    std::cout << sizeof(gpa) << "\n";
    std::cout << sizeof(student) << "\n";
    std::cout << sizeof(grades)/sizeof(grades[0]) << "\n";




    return 0;

}