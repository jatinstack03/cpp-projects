#include <iostream>

class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    // Initialize the queue with a fixed capacity
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // Free the dynamically allocated memory
    ~CircularQueue() {
        delete[] arr;
    }

    // Check if the queue is full
    bool isFull() {
        return ((rear + 1) % capacity == front);
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert an element into the queue
    bool enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue Overflow: Cannot enqueue " << value << "\n";
            return false;
        }

        // If the queue is completely empty, initialize front to 0
        if (isEmpty()) {
            front = 0;
        }

        // Move rear circularly and insert the value
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        return true;
    }

    // Remove an element from the queue
    bool dequeue() {
        if (isEmpty()) {
            std::cout << "Queue Underflow: Cannot dequeue\n";
            return false;
        }

        // If there's only one element left, reset the queue after removal
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            // Move front circularly
            front = (front + 1) % capacity;
        }
        return true;
    }

    // Get the front element
    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // Get the rear element
    int getRear() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return -1;
        }
        return arr[rear];
    }

    // Display all elements in the correct order
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return;
        }

        std::cout << "Queue elements: ";
        int i = front;
        while (true) {
            std::cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        std::cout << "\n";
    }
};

int main() {
    // Create a circular queue that can hold 5 elements
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display(); // Output: 10 20 30 40 50

    q.enqueue(60); // Prints: Queue Overflow

    q.dequeue();
    q.dequeue();
    q.display(); // Output: 30 40 50

    std::cout << "Inserting elements to test wrap-around:\n";
    q.enqueue(60);
    q.enqueue(70);
    q.display(); // Output: 30 40 50 60 70

    return 0;
}
