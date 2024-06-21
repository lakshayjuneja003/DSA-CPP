#include <iostream>
using namespace std;

class Stack {
    int size;
    int *arr;
    int top1;
    int top2;

public:
    Stack() {
        size = 20;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    ~Stack() {
        delete[] arr;
    }

    void push1(int e1) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = e1;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void push2(int e2) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = e2;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop1() {
        if (top1 >= 0) {
            top1--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    void pop2() {
        if (top2 < size) {
            top2++;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    void printStack1() {
        if (top1 == -1) {
            cout << "Stack 1 is empty" << endl;
        } else {
            for (int i = 0; i <= top1; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void printStack2() {
        if (top2 == size) {
            cout << "Stack 2 is empty" << endl;
        } else {
            for (int i = top2; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    // Example usage
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.printStack1(); // Output: 1 2 3 

    s.push2(20);
    s.push2(30);
    s.push2(40);
    s.printStack2(); // Output: 20 30 40 

    s.pop1();
    s.printStack1(); // Output: 1 2 

    s.pop2();
    s.printStack2(); // Output: 30 40 

    return 0;
}
