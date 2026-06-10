#include<iostream>

int main() {
      
    //break = break out of a loop

    //continue = skip cureent iteration

    // break and continue are jump statements used to alter the standard execution flow of loops

    for(int i=1;i<=20;i++)
    {
        if(i == 13) {
            // break;
            continue;
        }
        std::cout << i <<std::endl;

    }
}