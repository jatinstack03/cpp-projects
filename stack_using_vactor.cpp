#include <iostream>
#include <stack> // Required header

int main() {
    // Create a stack of integers
    std::stack<int> s;

    // 1. Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Get current size
    std::cout << "Stack size: " << s.size() << "\n";

    // 2. View the top element (should be 30)
    std::cout << "Top element: " << s.top() << "\n";

    // 3. Pop the top element (removes 30)
    s.pop();
    std::cout << "Top element after pop: " << s.top() << "\n";

    
    // 4. Check if the stack is empty and clear it
    std::cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << "\n";
    

    return 0;
}
