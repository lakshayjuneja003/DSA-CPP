Node* cycle(Node* head){
    Node* fast = head;
    Node* slow = head;

    while(fast ! = NULL && slow != NULL){
        if(fast == slow){
            return fast;
        }
        else if(fast->next == NULL){
            return NULL;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast == slow){
        return slow;
    }
}

Node* begOfCycle(Node* head){
    if(head==nullptr || head->next==nullptr) return false;

    Node* fast = cycle(head);
    if(fast == NULL){
        return NULL;
    }
    Node* slow = head;
    
    while(slow != NULL && fast != NULL){
        if(slow == fast ){
            return slow;
        }
        slow = slow ->next;
        fast = fast -> next;
    }
    if(slow != fast){
        return NULL;
    }
}