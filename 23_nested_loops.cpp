#include<iostream>

     /*
      loops() {
           loop(){
           } 
      }
    */

// a nested loop is simply a loop inside another loop.
// For every single iteration of the "outer loop,
// " the "inner loop" executes its entire cycle of iterations.
// Core LogicOuter loop starts its first iteration.
// Inner loop executes completely (from start to finish.
// Outer loop moves to its second iteration.
// Inner loop executes completely again.
// This continues until the outer loop's condition is no longer met.
// Basic Syntax (Nested for Loops)While you can nest while and do-while loops,
//  the for loop is the most common for nesting

  int main () 
  {
    int rows;
    int columns;
    char symbol;

    std :: cout << " How many rows : ";
    std :: cin >> rows;

    std::cout << " How many columns : ";
    std :: cin >> columns;

    std:: cout << " Enter the symol to use : ";
    std :: cin >> symbol;

    for (int i = 1; i <= rows; i ++){
        for (int j = 1; j <= columns; j++){
            std :: cout <<symbol;
          }
        std :: cout << " \n ";

    }
  }