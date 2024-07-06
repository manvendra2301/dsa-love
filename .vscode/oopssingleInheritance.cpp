#include <iostream>
using namespace std;
//parent class
class animal{
    public:
    int weight;
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

//child class or single inherited class 
class dog: public animal{
    public:
    int colour;
    void bark(){
        cout<<"barking"<<endl;
    }

};

int main(){
    //creating object of child class

    dog obj;
    obj.eat();

    obj.bark();
    

}