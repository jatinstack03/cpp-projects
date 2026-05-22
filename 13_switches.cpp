#include<iostream>
int main () 
{
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases 
    
    int month;
    std::cout << " Enter the month (1-12): ";
    std::cin >> month;
    
    switch(month) 
    {
        case 1:
        std::cout << "it is january";
        break;

        case 2:
        std::cout << "it is february";
        break;

        case 3:
        std::cout << "it is march ";
        break;
        
        case 4:
        std:: cout << "it is april ";
        break;

        case 5:
        std:: cout << "it is may ";
        break;

        case 6:
        std::cout << "it is june ";
        break;

        case 7:
        std::cout << "is is july ";
        break;

        case 8: 
        std::cout << "it is august";
        break;

        case 9: 
        std::cout << "it is saptember ";
        break;

        case 10:
        std::cout << "it is october ";
        break;

        case 11: 
        std::cout << " it is november ";
        break;

        case 12:
        std::cout << " it is december ";
        break;
        
        default:

        std::cout << "Please enter in only numbers between 1 to 12";

    }
   

    return 0;
    
 


}
    
