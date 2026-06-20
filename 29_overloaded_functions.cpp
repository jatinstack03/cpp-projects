#include<iostream>
         // FUNCTION CAN SHARE THE SAME NAME BUT YOUO NEED A 
         // DIFFRENT SET OF PARAMATERS A FUNCTION'S.
         // NAME PLUS ITS PARAMETERS IS KNOW AS A  FUNCTION SIGNATURE AND 
         // SIGNATURE NEEDS TO BE UNIQUE KIND OF LIKE I'D.
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() 
{
   
    bakePizza("pepperoni","mushroom");
    
    return 0;
}

void bakePizza() {
    std::cout << "here is your pizza !";
    
}  

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << "pizza! \n";

} 

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << "and "<< topping2 <<  "pizza! \n";


}

