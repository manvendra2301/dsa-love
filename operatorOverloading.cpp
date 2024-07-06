#include <iostream>
using namespace std;
class Test{
    int num1;
    public:
    //constructor 
    Test(int n){
        num1=n;
    }

    Test operator+(Test t2){
        Test t3(0);
        t3.num1=num1+t2.num1;
        return t3;


    }

    void print(){
        cout<<"values:"<<num1<<endl;
    }
};


int main(){
    Test t1(1);
    Test t2(2);
    t1.print();
    t2.print();
    Test sum(0);
    sum=t1+t2;
    sum.print();

    //left= function call
    //right = argument
    


}