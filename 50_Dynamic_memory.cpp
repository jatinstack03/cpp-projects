#include<iostream>

int main() {
    
    char *pGrades = NULL;
    int size;


    std::cout << "HOW MANY GRADES TO ENTER IN ?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++) {

        std::cout << "enter grade # " << i + 1 << " : ";
        std::cin >> pGrades[i];


    }

    for(int i = 0; i<size; i++) {
        std::cout << pGrades[i] << '\n';

    }

    delete pGrades;

    return 0;
    
}