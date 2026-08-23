#include<iostream>

int main() 
{
   int matrix[][3] = {{1,2,3},
                      {3,4,5},
                      {6,7,8} };
     
   int rows = sizeof(matrix) / sizeof(matrix[0]);
   
   int column = sizeof(matrix[0]) / sizeof(matrix[0][0]);



   for(int i = 0; i < rows ; i++) 
   {
      for(int j = 0; j < column; j++)
      {
         std::cout << matrix[i][j] << " ";

      }
      
      std::cout << "\n";
   }

}