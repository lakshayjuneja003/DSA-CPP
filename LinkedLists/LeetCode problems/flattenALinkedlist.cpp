#include <iostream>
using namespace std;
class node{ 

    public:
        int data;
        node* next;
        node* child;

        node(int data){
            this->child = NULL;
            this->next = NULL;
            this->data = data;
        }
};
node* merge(node* down, node* right) {
    if (down == NULL) return right;
    if (right == NULL) return down;

    node* downHead = down;
    while (down->child != NULL) {
        down = down->child;
    }

    down->child = right;
    return downHead;
}

node* flatten(node* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    node* down = head;
    down -> next = NULL;

    node* right = flatten(head->next);
    node* ans = merge(down , right);

    return ans;

}