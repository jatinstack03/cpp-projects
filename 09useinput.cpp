#include<iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main ()
{

    std::string name;
    int age;

    std::cout << "WHAT YOUR NAME ? ";
    std::getline(std::cin >> std::ws,name);

    std::cout << "what your age ";
    std::cin >> age;

    std::cout << name << " hello bro " <<std::endl;
    std::cout << age << " YOUR YEARS OF OLD " ;

    return 0;

}