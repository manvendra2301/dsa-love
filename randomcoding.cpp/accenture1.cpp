#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={2,4,7,8,9,6,5,1};
    
    int even[4];
    int odd[4];

    for(int i=0;i<8;i++){
       if(i%2==0){
        even[i]=arr[i];
       }
       else{
        odd[i]=arr[i];
       }
    }
    sort(even,even+3);
    sort(odd,odd+3);

    int sum=even[2]+odd[2];
    cout<<sum;

}