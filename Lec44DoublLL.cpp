#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node(){
        int value=this-> data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        
    }
};

void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d)
{
    //inserting at head
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }

    //inserting at head
    if(temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    nodetoinsert->prev=temp;
    temp->next=nodetoinsert;
}

void Deletion(Node* &head,int position){
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle and last nide 
        Node* curr=head;
        Node* prev=NULL;  
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;

        }
        prev->next=curr->next;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}

int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);


    InsertAtHead(head,25);
    print(head);

    InsertAtTail(tail,69);
    print(head);

    InsertAtPosition(head,tail,2,15);
    print(head);

    Deletion(head,3);
  print(head);

   cout<<"length of LL: "<< getlength(head);

}