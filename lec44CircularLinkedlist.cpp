#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node (int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtNode(Node* &tail, int element,int d){
    //empty list

    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode-> next=newnode;
    }
    else{
        //non empty list
        //assuming that the element is present in the list
        Node* curr=tail;

        while(curr->data!= element){
            curr=curr->next;
        }
        //element found -> curr is representing elemr=ent wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail=NULL;
    InsertAtNode(tail,5,3);
    print(tail);
    
    InsertAtNode(tail,3,2);
    print(tail);
    
    InsertAtNode(tail,3,9);
    print(tail);
    
    InsertAtNode(tail,2,6);
    print(tail);
}