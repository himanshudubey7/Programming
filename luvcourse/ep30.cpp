/*
STACKS AND QUEUES

*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    stack<int>s ;
    s.push(2);
    s.push(6);
    s.push(7);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}