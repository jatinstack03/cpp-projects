#include<iostream>

int main () 
{

    // type conversion = conversion a value of one data type to another 
    //                   implicit = automic
    //                   explicit = Precede vslue with new data type (int)

    

    //    double x = (int) 3.234;
     
    

    // std::cout << (char) 100;

    int correct = 8;
    int questions =10;

    double score = correct/(double)questions *100;

    std:: cout << score << "%";


    return 0;



}