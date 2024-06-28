#include <iostream>
using namespace std;
class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = nullptr;
        }
};


void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
// time complexity - 0(n);
// space complexity - 0(1);


// solution two 
/*
Node* sortList(Node *head){
    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;
    Node* temp = head;
    // counting the numbers of zeros and ones
    while(temp != NULL){
        if(temp -> data == 0){
            zeroCnt++;
        }
        else if(temp -> data == 1){
            oneCnt++;
        }
        else if(temp -> data == 2){
            twoCnt++;
        }

        temp = temp -> next;
    }

    // again resting the temp to first node
    temp = head;

    while(temp != NULL){
        if(zeroCnt != 0){
            temp -> data = 0;
            zeroCnt --;
        }
        else if(oneCnt != 0){
           temp -> data = 0;
            oneCnt --; 
        }
         else if(twoCnt != 0){
           temp -> data = 0;
            twoCnt --; 
        }


        temp = temp->next;
    }

    // returning the head after modifing the data
    return head;
}
// time complexity - 0(n);
// space complexity - 0(1);

 */
