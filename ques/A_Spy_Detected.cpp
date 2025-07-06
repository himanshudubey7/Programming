//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ar[n];
  for(int i =0;i<n;i++){
    cin>>ar[i];
  }
  int pos = 0;
  for(int i =0;i<n-2;i++){
    if(ar[i] != ar[i+1] && ar[i] == ar[i+2]){
        pos = i+2;
        break;
    }
    else if(ar[i]!= ar[i+2] && ar[i+1] == ar[i+2]){
        pos = i+1;
        break;
    }
    else if(ar[i] == ar[i+1] && ar[i] != ar[i+2]){
        pos = i+3;
        break;
    }
  }
  cout<<pos<<endl;

    }
    
    return 0;
}