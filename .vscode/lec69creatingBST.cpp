#include<iostream>
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

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* insertintoBST(Node* root,int d){

    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d<root->data){
        root->left=insertintoBST(root->left,d);
    }
    else{
        root->right = insertintoBST(root->right, d);
    }
    return root;
}

// min value in BST
Node* minvalue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
// max value in BST
Node* maxvalue(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

void takeinput(Node* & root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }
}

//finding inorder predecessor of a node in BST
Node* inorderpred(Node* root, int key,Node* &pred){
    //base case
    if(root==NULL){
        return NULL;
    }
    //if our root is key than the pred node will be the largest node in the left subtree
    if(root->data==key){
        if(root->left!=NULL){
            pred=maxvalue(root->left);
        }
    }

    //key value is less than the root data ,we will search in left subtree
    else if(key<root->data){
        inorderpred(root->left,key,pred);
    }

    else if(key>root->data){
        pred=root;
        inorderpred(root->right,key,pred);
    }
    return pred;


}

Node *inordersucc(Node *root, int key, Node *&succ)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }
    // if our root is key than the pred node will be the min node in the right subtree
    if (root->data == key)
    {
        if (root->right != NULL)
        {
            succ = minvalue(root->right);
        }
    }

    // key value is less than the root data we will search in left subtree
    else if (key < root->data)
    {
        succ=root;
        inordersucc(root->left, key, succ);
    }

    else if (key > root->data)
    {
        
        inorderpred(root->right, key, succ);
    }
    return succ;
}

Node* deletefromBST(Node* root, int val){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data==val){
        //no child
        if(root->right==NULL && root->left==NULL){
            delete root;
            return NULL;
        }

        //one child

        // left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
      
        //two child
        if(root->right!=NULL && root->left!=NULL){
            int mini= minvalue(root->right)->data;
            root->data=mini;
            root->right=deletefromBST(root->right,mini);
            return root;
        }
       
    }

    else if(val<root->data){
       root->left= deletefromBST(root->left, val);
        return root;
    }

    else if(val>root->data){
       root->right= deletefromBST(root->right,val);
        return root;
    }
}

int main(){
    Node* root=NULL;
    Node* pred=NULL;
    Node* succ=NULL;
   
    cout<<"enter data to create BST"<<endl;

    takeinput(root);

    cout<<"printing BST"<<endl;

    levelOrderTraversal(root);

    cout<<endl<<"printing inorder"<<endl;
    inorder(root);

    cout<<endl<<"printing preorder"<<endl;
    preorder(root);

    cout<<endl<<"printing postorder"<<endl;
    postorder(root);

    cout<<endl<<endl;

    cout<<endl<<"printing min value in BST"<<endl;
    cout<<minvalue(root)->data;
    
    cout<<endl<<"printing max value in BST"<<endl;
    cout<< maxvalue(root)->data;
    

    cout<<endl;
    cout<<"inorder predecessor of a node '5"<<endl;

    cout<<inorderpred(root,5,pred)->data;

    cout<<endl<<"inorder succesor of node'5 in BST"<<endl;
    cout<<inordersucc(root,5,succ)->data;

    //deletion 
    cout<<endl<<"bst after deletion "<<endl;
    root=deletefromBST(root,27);

    levelOrderTraversal(root);

    cout << endl
         << "printing inorder" << endl;
    inorder(root);

    cout << endl
         << "printing preorder" << endl;
    preorder(root);

    cout << endl
         << "printing postorder" << endl;
    postorder(root);

    cout << endl
         << endl;

    cout << endl
         << "printing min value in BST" << endl;
    cout << minvalue(root)->data;

    cout << endl
         << "printing max value in BST" << endl;
    cout << maxvalue(root)->data;

    cout << endl;
    cout << "inorder predecessor of a node '5" << endl;

    cout << inorderpred(root, 5, pred)->data;

    cout << endl
         << "inorder succesor of node'5 in BST" << endl;
    cout << inordersucc(root, 5, succ)->data;
}