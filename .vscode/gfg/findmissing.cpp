#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cout<<"enter size of array 1 and array 2 "<<endl;
    cin>>n>>m;
    int a[n];
    int b[m];
    cout<<"enter elements for array 1"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];

    }
    cout<<"enter elements for array 2 "<<endl;
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }
    set<int> s;
    for(int i =0;i<m;i++){
        s.insert(b[i]);
    }
    cout<<"missing elements are "<<endl;
    for(int i = 0;i<n;i++){
        if(s.find(a[i]) == s.end())
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}