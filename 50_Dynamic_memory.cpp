#include<iostream> // input-output stream library include karna

int main() { // main function jahan se program start hota hai
    
    char *pGrades = NULL; // pointer declare kiya jo grades ke liye memory point karega, abhi NULL set hai
    int size;             // variable 'size' declare kiya jo user se grades ki count lega

    std::cout << "HOW MANY GRADES TO ENTER IN ?: "; // user ko prompt dikhana
    std::cin >> size; // user se kitne grades enter karne hain wo lena

    pGrades = new char[size]; // dynamic memory allocate karna grades store karne ke liye

    // loop for input
    for(int i = 0; i < size; i++) { // i=0 se start, size tak chalega
        std::cout << "enter grade # " << i + 1 << " : "; // grade number dikhana
        std::cin >> pGrades[i]; // user se grade input lena aur array mein store karna
    }

    // loop for output
    for(int i = 0; i < size; i++) { // phir se loop chalana output ke liye
        std::cout << pGrades[i] << '\n'; // har grade ko print karna nayi line mein
    }

    delete[] pGrades; // dynamically allocated memory free karna (delete[] use karna zaroori hai)

    return 0; // program successful terminate karna
}
