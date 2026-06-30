#include<iostream>

int main () 
{
    // array =  a data structure that can hold multiple values.
    //          values are acceseed by an index number  
    //          "kind od like a variable that holds multiple values".

   std::string animeCharecter[3];

   animeCharecter[0] = "goku";
   animeCharecter[1] = "vegita";
   animeCharecter[2] = "Bhulma";

   std::cout << animeCharecter[0] << "\n";
   std::cout << animeCharecter[1] << "\n";
   std::cout << animeCharecter[2] << "\n";


  double prices[] = {3.00 ,8.00,11.00,13.00};
  
  std::cout << prices[0] << "\n";
  std::cout << prices[1] << "\n";
  std::cout << prices[2] << "\n";
  std::cout << prices[3] << "\n";



    return 0;
}