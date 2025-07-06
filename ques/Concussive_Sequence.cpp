//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v , res;
stack<int> s1;
stack<int> s2;

        int n;
        cin>>n;
        for(int i= 0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());



        //arrangement starts here

        //for n is even 
int flag = 0;
        if(n%2 ==0){
for(int i = 0;i<n;i++){
    if(i<n/2){
        s1.push(v[i]);
    }
    else{
        s2.push(v[i]);
    }

}

while(s1.size() != 0){
    if(s1.top() == s2.top()){
flag = 1;
    }
    res.push_back(s1.top());
    res.push_back(s2.top());

    s1.pop();
    s2.pop();
}
        }


//for n is odd

else{
    res.push_back(v[0]);
    for(int i = 1;i<n;i++){
        
        if(i<=n/2){
        s1.push(v[i]);
        }
        else{
            s2.push(v[i]);
        }
    }
while(!s1.empty()){
    if(s1.top() == s2.top()){
        flag = 1;
    }
    res.push_back(s2.top());
    res.push_back(s1.top());

    s1.pop();
    s2.pop();
}
}

if(flag== 1){
    cout<<"-1"<<"\n";
    continue;
}
for(int i = 0;i<n;i++){
    cout<<res[i]<<" ";
}
cout<<endl;

    }
    return 0;
}