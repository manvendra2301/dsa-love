#include <iostream>
using namespace std;
 class Distance{
    int feet;
    float inches;

    public:
    //constructor
    Distance(){
        feet=0;
        inches=0;

    }

    Distance(int f, float i)
    {
        feet = f;
        inches =i;
    }

    Distance operator+(Distance d3){
        Distance temp;
        temp.feet=feet+d3.feet;
        temp.inches=inches+d3.inches;
        return temp;


    }
    void print(){
        cout<<"feet:"<<feet<<endl;
        cout<<"inches:"<<inches<<endl;
    }
 };


 int main(){
    Distance d1;
    Distance d2(4,3.3);
    Distance d3(6,6.7);
    d1=d2+d3;
    d1.print();

 }