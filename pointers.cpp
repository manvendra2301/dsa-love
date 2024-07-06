// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int *p)
{
    cout<<*p;

}
int main(){
    int value=5;
    int *p=&value;
    print(p);
    return 0;
}
