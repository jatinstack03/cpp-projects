#include<iostream> // include the input-output stream library

int main() // main function where program execution begins
{
   // declare and initialize an array of strings with student names
   std::string students[] = {"jatin","himesh","harsh"};

   // loop through the array elements
   // sizeof(students) gives total size in bytes of the array
   // sizeof(std::string) gives size of one string object
   // dividing gives the number of elements in the array
   for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
   {
       // print each student name followed by a newline
       std::cout << students[i] << "\n";
   }

   return 0; // indicate successful program termination
}
