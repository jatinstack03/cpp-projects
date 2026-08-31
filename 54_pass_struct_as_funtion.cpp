#include<iostream>

struct Car{

    std::string model;
    int year;
    std::string colour;

};
void printcar(Car &car);

void paintcar(Car car,std::string color);


int main() {

    Car car1;
    Car car2;

    car1.model = "mustang";
    car1.year = 2026;
    car1.colour = "blue";

    car2.model = "chesta";
    car2.year = 2016;
    car2.colour = "greay";

    paintcar(car1,"silarvar");
    paintcar(car2,"gold");
  
    printcar(car1);
    printcar(car2);



}

void printcar(Car &car){

    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.colour << '\n';
    std::cout << '\n';

}

void paintcar(Car car,std::string color){
    car.colour = color;

}