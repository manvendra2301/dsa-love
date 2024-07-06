#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
    //properties
    int top;
    int size;
    int *arr;

   // behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

    }

    void push(int element ){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top!=-1){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else {
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else 
        return false;
    }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(13);
    st.push(4);
    
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    if(st.isempty()){
        cout<<"stack empty hai meri jaan";
    }
    else 
    cout<<"stack kaali nah i hai ";
    
    
}