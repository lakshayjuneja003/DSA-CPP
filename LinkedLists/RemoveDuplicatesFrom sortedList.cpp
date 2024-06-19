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

void removeDuplicate(Node* head) {
    if (!head) return; // If the list is empty, do nothing

    Node* curr = head;

    while (curr != nullptr) {
        if (curr->next !=NULL && curr->data == curr->next->data) {
            Node* next_next = curr->next->next;
            Node* NodeToDelete = curr->next;
            delete NodeToDelete;
            curr->next = next_next;
        } else {
            curr = curr->next; // Move to the next node
        }
    }
}

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Helper function to add a new node to the end of the list
void appendNode(Node*& head, int data) {
    if (head == nullptr) {
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

int main() {
    // Create a sample sorted linked list with duplicates: 1 -> 1 -> 2 -> 3 -> 3
    Node* head = nullptr;
    appendNode(head, 1);
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 3);

    cout << "Original list: ";
    printList(head);

    // Remove duplicates
    removeDuplicate(head);

   cout << "List after removing duplicates: ";
    printList(head);

}