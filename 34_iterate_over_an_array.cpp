#include<iostream>

int main()
{
    std::string student[] = {"himesh","bless","jatin","harsh"};
      
        // DISPLE STUDENTS...
    
        for(int i=0; i < sizeof(student)/sizeof(std::string); i++)
        {
           std::cout << student[i] << "\n";


        }

        return 0;

}