//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    if(n%2 ==0){
        cout<<"4"<<" "<<n-4<<endl;
    }
    else if(n%2!=0){
        cout<<"9"<<" "<<n-9<<endl;
    }
    return 0;
}