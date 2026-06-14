#include <iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        Node* temp=q.front();
        
        q.pop();

        if(temp==NULL){
            //purana level complete traverse ho chuka h
            cout<<endl;
            if(!q.empty()){
                //queue still has some nodes
                q.push(NULL);

            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }    
            if(temp->right){
                q.push(temp->right);

        }

        }
    }
}

int main() {
    Node* root = NULL;
    //creating a tree
    root = buildTree(root);
    //level order
    cout<<"printing level order traversal output"<<endl;
    levelordertraversal(root);

    return 0;
}
//reverse order traversal read and code by yourself-hw
