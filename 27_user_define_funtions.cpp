#include<iostream>

void happyBirthday(std::string name,int age); // decleration


int main () 
{
        
        // FUNCTION ===  A BLOCK OF REUSABLE CODE.....
        std::string name = "bro ";
        int age = 18;

       happyBirthday(name, age);
      
       
    return 0;


}

void happyBirthday(std::string name,int age) // parameter (you can rename perameter)
{
    std::cout<< " Happy brithday to you "  << name << '\n';
    std::cout<< " Happy brithday to you "<< name << '\n';
    std::cout<< " Happy brithday to you " << name << '\n';
    std::cout<< " Happy brithday to you " << name << '\n';
    std::cout<< " you are " << age << "years old \n";


}