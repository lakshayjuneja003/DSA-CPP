#include <iostream>
using namespace std;

class Stack {
    int size;
    int *arr;
    int top;

public:
    Stack() {
        size = 20;
        arr = new int[size];
        top = -1;
    }
    
    ~Stack() {
        delete[] arr;
    }

    void push(int e) {
        if (top == size - 1) {
            cout << "No more space available" << endl;
            return;
        }
        top++;
        arr[top] = e;
    }
    void pop() {
        if (top > -1) {
            top--;
        } else {
            cout << "Stack UnderFlow" << endl;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int Top() {
        if (top > -1) {
            return arr[top];
        } else {
            cout << "Stack UnderFlow" << endl;
            return -1;
        }
    }

    void printStack() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(4);
    s.pop();

    cout << "Is stack empty? " << s.isEmpty() << endl;
    cout << "Top element: " << s.Top() << endl;
    s.push(23);
    s.push(24);
    s.push(25);
    s.printStack();

    return 0;
}
