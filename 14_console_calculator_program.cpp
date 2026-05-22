#include<iostream>
int main () 

{
   char op;
   double num1;
   double num2;
   double result;

   std::cout << "**********calatulator***************";

   std::cout << "enter either (+ _ * /)";
   std::cin >> op;

   std::cout << "enter #1";
   std::cin >> num1;

   std::cout << "enter #2";
   std::cin >> num2;

   switch(op) 
   {
    case '+':
    result = num1 + num2;
    std::cout << " result " << result << std :: endl;
    break;

    case '-':
    result = num1 - num2;
    std::cout << " rssult " << result << std:: endl;
    break;

    case '*':
    result = num1 * num2;
    std::cout << "result" << result << std::endl;
    break;

    case '/':
    result = num1 / num2;
    std::cout << "result" << result << std::endl;
    break;

    default:
    std::cout << "please enter the vaild response ";
    break; 

   }

    return 0;
} 