#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()

{stack<char> s;
string ans="";

string str="maanDev";

for (int i=0;i<str.length();i++){
    char ch=str[i];
    s.push(ch);

}
while(!s.empty()){
    char ch=s.top();
    ans.push_back(ch);

    s.pop();

}
cout<<ans;
}