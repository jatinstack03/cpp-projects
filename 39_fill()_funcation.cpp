#include<iostream>

int main()
{

    // FILL = FILLS A RANGE OF ELEMANTS WITH A SPECIFIED VALUES 
    //          FILL(BEGIN,END,VALUE)
   
  const int SIZE = 100;

  std::string foods[SIZE];

  fill(foods,foods+SIZE,"PIZZA");

  for(std::string food :foods)
  {
    std::cout << food << std::endl;

  }

  return 0;

   
   
}