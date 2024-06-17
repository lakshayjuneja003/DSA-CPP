#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    Node(int data){
        this-> data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
void InsertAtHead(Node* &Head , int data){
    Node* temp = new Node(data);
     if(Head == NULL){
        Head = temp;
     }
     temp->next = Head;
     Head = temp;

}
void InsertAtTail(Node* &tail , int data){
    Node* temp = new Node(data); 
    tail->next = temp;
    tail = temp;
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
void deleteNode(Node* &Head , int pos){
    Node* temp = Head;
    if(pos == 1){
        Head = temp->next;
        temp->next = NULL;
        delete temp;
        return ;
    }
    int cnt = 1;
    while(cnt<pos){
        temp = temp->next;
        cnt++;
    }
    Node* curr = temp->next;
    temp->next = curr->next;
    curr->next = NULL;
    delete curr;
}
void insertAtPosition(Node* &tail, Node* & Head, int position, int d){
    if(position == 1) {
        InsertAtHead(Head, d);
        return;
    }
    Node* temp = Head;
    int cnt = 1;
    while(cnt < position){
        temp= temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail , d);
    }

    Node* curr = new Node(d);
    curr->next = temp->next;
    temp->next = curr;

}


int main(){
    
    Node* node1 = new Node(10);
    Node* Head = node1;
    Node* tail = node1;
    // print(Head);


    InsertAtHead(Head, 12);
    print(Head);

    InsertAtTail(tail , 22);
     print(Head);

     cout << "tail : " << tail->data << " Head : " << Head->data << endl;

    insertAtPosition(tail , Head , 2 , 15);
    print(Head);

    deleteNode(Head , 2);
    print(Head);
    return 0;
}