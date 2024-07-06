#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(12);
    d.push_front(10);

    cout<<d.front()<<" "<<d.back()<<endl;
    d.pop_front();
    cout << d.front() << endl;
}

