#include <iostream>
#include <queue> // Required for std::queue

int main() {
    // Create a queue of integers
    std::queue<int> q;

    // 1. Enqueue (Push) elements onto the back
    q.push(10);
    q.push(20);
    q.push(30);

    // 2. Check the size of the queue
    std::cout << "Queue Size: " << q.size() << std::endl;

    // 3. Access front and back elements
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;

    // 4. Dequeue (Pop) and print all elements until the queue is empty
    std::cout << "Removing elements: ";
    while (!q.empty()) {
        std::cout << q.front() << " "; // Print the item at the front
        q.pop();                       // Remove the item from the front
    }
    std::cout << std::endl;

    return 0;
}
