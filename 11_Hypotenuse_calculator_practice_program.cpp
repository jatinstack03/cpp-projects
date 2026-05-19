#include<iostream>
#include<cmath>
//formula sqrt(a^2,b^2)

int main () 
{
    double a;
    double b;
    double c;

    std::cout << "Enter side  A";
    std::cin >> a;

    std::cout << "Enter side of  B ";
    std::cin >> b;

    c = sqrt(pow(a,2)+pow(b,2));

    std::cout << "result of c is " << c;

     return 0;
}