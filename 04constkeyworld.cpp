#include<iostream>

int main () {
    //THE CONST KEYWORD SPECIFIES THAT A VARIABLE'S VALUE IS CONSTANT
    //TELLS THE COMPILER TO PREVENT ANYTHING FORM MODIFYING IT 
    //READ - ONLY

    const double PI = 3.14;
    // pi = 4.533;
    const int LIGTH_SPEED =29979;
    const int WIDTH =1920;
    const int HEIGHT =1080;
    double radius = 10;
    double circumference = 2*PI*radius;


    std::cout <<circumference <<"cm";

  return 0;


}
