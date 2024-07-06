#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};

Node* buildtree(Node* root){
    cout<<"enter root data"<<endl;
    int data;
    cin>>data;

    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data for inserting in left "<<data<<endl;

    root->left=buildtree(root->left);

    cout<<"enter data for inserting in right "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
Node* levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            //purana level order traversal ho chuka hai 
            cout<<endl;
            if(!q.empty())
            q.push(NULL);

        }

        else{
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            
            q.push(temp->right);
        }
    }
}

int main(){
    Node* root=buildtree(NULL);

    //printing level order traversal of tree
    levelorder(root);
}
