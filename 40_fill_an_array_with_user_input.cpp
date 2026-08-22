#include<iostream>
#include<string>

int main()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to  quit (" << i+! << ")";
        std::getline(std::cin, foods[i]);

        if(foods[i] == "q")
        {
            foods[i] = "";
            break;

        }
    }
    std::cout << "/n you like the following foods: ";

    for(int i = 0; i < size; i++)
}