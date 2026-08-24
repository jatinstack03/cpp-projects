#include<iostream>

int main() {

    // MEMORY ADDRESS = A LOCATION IN MEMORY WHERE DATA IS STORED
    // A MEMORY ADDRESS CAN ACCESSED WITH & ( address-of operator )

    std::string name = "MAAN BHAIk";
    int age = 21;
    bool student = true;


    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    

    return 0;
}