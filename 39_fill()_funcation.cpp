#include<iostream>
 
// fill() == FILLS A RANGE OF ELEMENTS WITH A
//           SPECIFIED VALUE FILL(BEGIN, END, VALUE)
int main() {
std::string foods[100];

fill(foods, foods+100,"pizza");

for(std::string food : foods)
{
    std::cout << food << '\n';


}

return 0;

}