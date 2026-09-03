#include<iostream> // Input-output library include karna

struct Car { // Car struct banaya jisme car ke details store honge
    std::string model;  // Car ka model (string type)
    int year;           // Car ka manufacturing year (int type)
    std::string colour; // Car ka colour (string type)
};

// Function prototype: car ke details print karne ke liye
void printcar(Car &car);

// Function prototype: car ka colour change karne ke liye
void paintcar(Car car, std::string color);

int main() { // Program ka entry point

    Car car1; // Pehla car object banaya
    Car car2; // Dusra car object banaya

    // car1 ke details set karna
    car1.model = "mustang";
    car1.year = 2026;
    car1.colour = "blue";

    // car2 ke details set karna
    car2.model = "chesta";
    car2.year = 2016;
    car2.colour = "greay";

    // paintcar function call karna (colour change karne ke liye)
    paintcar(car1, "silarvar");
    paintcar(car2, "gold");
  
    // printcar function call karna (details print karne ke liye)
    printcar(car1);
    printcar(car2);

} // main function end

// Function jo car ke details print karega
void printcar(Car &car) {
    std::cout << &car << '\n';       // Car ka memory address print karega (zaroori nahi hai)
    std::cout << car.model << '\n';  // Car ka model print karega
    std::cout << car.year << '\n';   // Car ka year print karega
    std::cout << car.colour << '\n'; // Car ka colour print karega
    std::cout << '\n';               // Ek extra line print karega
}

// Function jo car ka colour change karega
void paintcar(Car car, std::string color) {
    car.colour = color; // Car ka