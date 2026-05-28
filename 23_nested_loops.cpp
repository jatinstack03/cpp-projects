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
// Inner loop executes completely (from start to finish).
// Outer loop moves to its second iteration.
// Inner loop executes completely again.
// This continues until the outer loop's condition is no longer met.
// Basic Syntax (Nested for Loops)While you can nest while and do-while loops,
//  the for loop is the most common for nesting

    int main() 
{
   
for (int i = 1; i <= 3; i++) {       // Outer loop
    for (int j = 1; j <= 2; j++) {   // Inner loop
        // Code to execute
        std::cout << "i: " << i << ", j: " << j << std::endl;
    }
}

   return 0;
}