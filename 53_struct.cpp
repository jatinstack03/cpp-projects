#include<iostream>

// struct = A STRUCTURE THAT GROUP RELATED VARIABLES UNDER ONE NAME
//         STRUCTS CAN CONTAIN MANY DIIFERENT DATA TYPES(STRING,INT,DOUBLE...)
//         VARIABLES IN A STRUCT ARE KNOW AS "MEMBER" MEMBERS CAN BE ACCESS WITH "CLASS MEMBER ACESS OPERATOR".

struct student{

    std::string name;
    int age;
    int number;

};

int main() {

    student student1;

    student1.name = "jatin";
    student1.age = 18;
    student1.number = 9316518604;

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.number << '\n';
}
