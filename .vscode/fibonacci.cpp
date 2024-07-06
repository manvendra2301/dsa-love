#include <iostream> 
using namespace std;

int fibonnaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib=fibonnaci(n-1)+fibonnaci(n-2);

    return fib;
}

int main(){
    int n;
    cin>>n;

    int ans=fibonnaci(n);
    cout<<ans;
    return 0;
}