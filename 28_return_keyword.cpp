#include<iostream>
//  terminates the execution of a function immediately and hands control back to the calling function.

double square(double lenght);
double cube(double lenght);

int main() 
{
  double length = 5.5;
  double area =square(length);
  double volume=cube(length);

  std::cout << "Area : " << area << " cm^2 \n";
  std::cout <<"volume : " << volume << " cm^3 \n";

  return 0;

}

double square (double lenght){
   return lenght * lenght;

}

double cube (double lenght)
{
    return lenght * lenght* lenght;

}

