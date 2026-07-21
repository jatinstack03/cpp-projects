#include <iostream>
#include <vector>
#include <algorithm> // Required for std::fill

int main() {
    std::vector<int> vec(5); // Creates a vector of size 5
    
    // Fill all elements with the value 42
    std::fill(vec.begin(), vec.end(), 42); 
    
    return 0;
}