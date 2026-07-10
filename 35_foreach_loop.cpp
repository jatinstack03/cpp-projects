#include<iostream>

int main() {
    // foreach loop == loop that eases the traversal over an
    //                 iterable data set.
     
    std::string students[] = {"jatin","bless","mohit"};

    for(std::string student : students) {
            
        std::cout << student << "\n";


    }
   return 0;
   
    


}
