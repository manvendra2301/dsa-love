#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node*root){
    cout<<"enter the data:"<<endl;
    int data ;
    cin>>data;
    root= new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter data for inserting in left:"<<data<<endl;
    root->left=buildtree(root->left);

    cout << "enter data for inserting in right:"<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        
        q.pop();
        if(temp==NULL){
            //purana level complete traverse ho chuka hai 
            cout<<endl;
            if(!q.empty()){
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

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    
}

int main(){
    node* root=NULL;
    root=buildtree(root);
   // 5 4 2 -1 -1 1 -1 -1 3 -1 6 -1 -1

    cout<<"printing the level order traversal:"<<endl;
    levelordertraversal(root);

    cout<<"preorder traversal"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<endl;

    cout<<"inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
   
    return 0;
}