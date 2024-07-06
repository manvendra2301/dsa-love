#include<iostream>
using  namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this-> data=data;
        this-> next=NULL;
    }
};
int main()
{
    //node located in heap(dynamic allocation)
    node* node1=new node(10);

    cout<< node1->data<<endl;
    cout<< node1->next<<endl;

    node* node2;
    cout << node2->data << endl;
    cout << node2->next << endl;
    return 0;
}