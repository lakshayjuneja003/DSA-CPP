#include <bits/stdc++.h> 
class CircularQueue {
    int size, front, rear, *arr;
public:
    // Initialize your data structure.
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        rear = front = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value) {
        // step 1: to check if queue is full
        if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
            return false;
        }

        // step 2: to check if the data given is the first element
        else if (front == -1) {
            rear = front = 0;
        }

        // step 3: to maintain cyclic nature
        else if (rear == size - 1 && front != 0) {
            rear = 0;
        }

        // step 4: normal push into queue
        else {
            rear++;
        }

        // pushing the element in all cases
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue() {
        // step 1: to check if queue is empty
        if (front == -1) {
            return -1;
        }

        int val = arr[front];
        
        // step 2: to check if the queue has only one element
        if (front == rear) {
            front = rear = -1;
        }

        // step 3: to maintain cyclic nature
        else if (front == size - 1) {
            front = 0;
        }

        // step 4: normal pop from queue
        else {
            front++;
        }

        return val;
    }
};
