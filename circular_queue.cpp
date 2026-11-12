#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    // Constructor to initialize the queue
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // Destructor to free allocated memory
    ~CircularQueue() {
        delete[] arr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Check if the queue is full
    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    // Insert an element at the rear
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        // If inserting the first element
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    // Remove an element from the front
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return -1;
        }
        int removedValue = arr[front];

        // If the queue had only one element, reset pointers
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return removedValue;
    }

    // Get the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    // Display all elements from front to rear
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display(); // Output: 10 20 30 40 50

    cout << "Dequeued: " << q.dequeue() << endl; // Removes 10
    cout << "Dequeued: " << q.dequeue() << endl; // Removes 20

    // Wrap around and reuse freed space at the front
    q.enqueue(60);
    q.enqueue(70);

    q.display(); // Output: 30 40 50 60 70
    cout << "Front element: " << q.peek() << endl;

    return 0;
}
