#include<iostream>
       

     // Local variables = declared inside a function or block {}.
     // Global variables = declered out side of all function or block {}.
 
  int myNum = 3; // global variable 

  void printNum();

int main () 
{
   
    int myNum = 1; // local variables
     
    printNum(); 
    std::cout << myNum << '\n';


    return 0;

}

void printNum() 
{
    int myNum = 2;  // local variabels 
    std::cout << myNum << '\n';

}

       //LINE A FUCTION WILL USE ANY LOCAL VAIABLES FIRST 
       //RESORTING TO ANY GLOBAL VAIABLES.