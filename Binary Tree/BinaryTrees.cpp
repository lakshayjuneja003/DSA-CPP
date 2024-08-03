#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
};


node* buildTree(node* root){
    cout << "Enter the data for node : " ;
    int data ;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    cout << "enter the data for the left of : "<< data ;
    root->left = buildTree(root->left);
    cout << "enter the data for the right of : "<< data ;
    root->right = buildTree(root->right);

    return root;
}
node* levelorderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout << temp->data << " ";
            if(temp -> left){
                q.push(temp->left);
            }
            else if(temp -> right){
                q.push(temp->right);
            }
        }
    }
}


void inorder(node* root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL){
        return ;
    }

    cout << root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void buildfromlevelorder(node* &root){
    queue<node*> q;
    cout << "Enter the data for root node : ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        cout << "Enter the data for the left node with data : " << temp->data;
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the data for the right node with data : " << temp->data;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}
int main(){
    node* root = NULL;
    root = buildTree(root);

}