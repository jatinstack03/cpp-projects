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

    // Add an element to the queue (Enqueue)
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
        cout << "Inserted: " << value << endl;
    }

    // Remove an element from the queue (Dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
            return;
        }
        cout << "Removed: " << arr[front] << endl;

        // If the queue had only one element, reset pointers
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    // Get the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    // Display all elements in the queue
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
    CircularQueue q(5); // Create a circular queue of capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Queue is now full
    q.enqueue(60); 
    q.display();

    // Remove two elements to free up space at the front
    q.dequeue();
    q.dequeue();
    q.display();

    // Insert new elements to demonstrate circular wrap-around
    q.enqueue(60);
    q.enqueue(70);
    q.display();

    cout << "Front element is: " << q.peek() << endl;

    return 0;
}
