#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        //memory free
        if(this->next !=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node created
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    //insert at start 
    if(position==1)
    {
        InsertAtHead(head,d);
        return;
    }

    Node* temp= head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    //insertion at last
    if(temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}


void Deletion(int position, Node *&head)
{
    // first position pat delete karna hua
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        // delete at any node of LL
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
       //current node print
        cout<< temp-> data<<" ";

        //temp ko aage badhana 
        temp=temp->next;

    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);

    InsertAtHead(head,12);
    print(head);

    InsertAtHead(head,15);
    print(head);

    InsertAtTail(tail,22);
    print(head);

    InsertAtHead(head, 11);
    print(head);

    InsertAtTail(tail, 19);
    print(head);

    InsertAtPosition(head,tail,3,10);
    print(head);
    
    Deletion(3,head);
    print(head);


   


    return 0;


}