#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);

    }
    while(!s.empty()){
        if(s.top()%2!=0){
            cout<<s.top()<<endl;
        }
        s.pop();
    }
     
      return 0;
}