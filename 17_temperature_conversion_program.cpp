#include<iostream>

int main() {

    double temp;
    char unit;

    std::cout << "************** Temperature Conversion ****************" << std::endl;
    std::cout << "F = Fahrenheit" <<std::endl;
    std::cout << "C = celsius \n";
    std::cout << "What unit would  you like to convert to : \n";
    std::cin >> unit;


    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter the Temperature in celsius \n";
        std::cin >> temp;

        temp = (temp * 1.8) +32.0;

        std::cout << "Temperature " << temp << "F \n";

    }

    else if (unit == 'C' || unit == 'c')
    {
        std::cout  << "Enter the Temperature in Fahrenheit \n";
        std::cin >> temp;

        temp = (temp + 32) / 1.8;

        std::cout << "Temperature " << temp << "C \n";


    }
    else {
        std::cout << "Palese Enter c or f  \n";

    }

    return 0;

}