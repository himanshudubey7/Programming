#include<bits/stdc++.h>

using namespace std;
int main(){
    queue<string> q;
    q.push("abc");
    q.push("cde");
    q.push("pte");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}