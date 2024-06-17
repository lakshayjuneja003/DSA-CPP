#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};
void InsertAtHead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        return ;
    }
    Node* temp = new Node(data);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void InsertAtPosition(Node* &head , Node* &tail , int pos , int data){
    Node* temp = head;
    if(pos == 1){
        InsertAtHead(head , data);
        return;
    }
    int cnt = 1;
    while(cnt<pos){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail , data);
        return ;
    }
    Node* curr = new Node(data);
    curr->next = temp->next;
    curr->prev = temp;
    temp->next = curr;
}
void print(Node* &Head){

      if(Head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = Head;
    while(temp!= NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node* &head , int pos){
    if(pos == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    // deleting middle node
    Node* prev = NULL;
    Node* curr = head;
    int cnt= 1;
    while(cnt < pos){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 12);
    print(head);
    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head , tail , 2 , 22);
    print(head);

    deleteNode(head , 1);
    print(head);
    return 0;
}