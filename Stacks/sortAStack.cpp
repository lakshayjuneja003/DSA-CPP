#include <stack>
using namespace std;

class SortedStack {
public:
    stack<int> s;
    void sort();
};

// Forward declaration of the helper functions
void solve(stack<int> &s);
void sortStack(stack<int> &s, int x);

void SortedStack::sort() {
    // Call the helper function to sort the stack
    solve(s);
}

void solve(stack<int> &s) {
    // Base case: if the stack is empty, return
    if (s.empty()) {
        return;
    }

    // Remove the top element
    int val = s.top();
    s.pop();

    // Recursively sort the remaining stack
    solve(s);

    // Insert the top element back in sorted order
    sortStack(s, val);
}

void sortStack(stack<int> &s, int x) {
    // Base case: if the stack is empty or the top element is smaller than x, push x
    if (s.empty() || s.top() < x) {
        s.push(x);
        return;
    }

    // Remove the top element
    int val = s.top();
    s.pop();

    // Recursively call sortStack to find the right position for x
    sortStack(s, x);

    // Push the top element back
    s.push(val);
}
