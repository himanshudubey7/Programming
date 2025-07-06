//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    long long n;
    cin>>n;
    if(n<4 && n>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i = n;i>=0;i--){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
        for(int i =n;i>0;i--){
            if(i%2 ==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}