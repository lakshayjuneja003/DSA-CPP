#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        cout << "Memory is free for node with data " << data << endl;
    }
};
// itreatatively reverse linked list
// Function to reverse the linked list
void reverse(Node* &Head) {
    Node* curr = Head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    Head = prev;
}

// recursively reverse linked list
void reverseRecursivly(Node* &Head , Node* curr , Node* prev) {
    if( curr == NULL)
    {
        Head = prev;
        return ;
    }
    Node* forward = curr->next;;
    reverseRecursivly(Head , forward , curr);
    curr->next = prev;
  
}

// Function to insert a node at the head of the linked list
void InsertAtHead(Node* &Head , int data) {
    Node* temp = new Node(data);
    temp->next = Head;
    Head = temp;
}

// Function to insert a node at the tail of the linked list
void InsertAtTail(Node* &tail , int data) {
    Node* temp = new Node(data); 
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
}

// Function to print the linked list
void printList(Node* Head) {
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(Node* &tail, Node* &Head, int position, int d) {
    if(position == 1) {
        InsertAtHead(Head, d);
        return;
    }

    Node* temp = Head;
    int cnt = 1;
    while(cnt < position-1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if(temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    if(temp->next == NULL) {
        InsertAtTail(tail, d);
    } else {
        Node* curr = new Node(d);
        curr->next = temp->next;
        temp->next = curr;
    }
}

int main() {
    Node* Head = NULL;
    Node* Tail = NULL;

    // Inserting nodes at the head of the list
    InsertAtHead(Head, 10);
    Tail = Head;
    InsertAtHead(Head, 20);
    InsertAtHead(Head, 30);
    InsertAtHead(Head, 40);

    cout << "Original List: ";
    printList(Head);

    // Inserting a node at a specific position
    insertAtPosition(Tail, Head, 3, 25);
    cout << "List after insertion at position 3: ";
    printList(Head);

    // Inserting a node at the tail
    InsertAtTail(Tail, 50);
    cout << "List after inserting at the tail: ";
    printList(Head);

    // Reversing the linked list
    // reverse(Head);
    Node* curr = Head;
    Node* prev = NULL;
    reverseRecursivly(Head , curr , prev);

    cout << "Reversed List: ";
    printList(Head);

    // Deleting nodes to free memory
    while (Head != NULL) {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
    }

    return 0;
}
