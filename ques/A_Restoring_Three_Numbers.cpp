//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int ar[4];
    for(int i = 0;i<4;i++){
        cin>>ar[i];
    }
    sort(ar, ar+4);
  int c= ar[3] - ar[0];
  int b= ar[3] - ar[1];
  int a = ar[3] - ar[2];
  cout<<a<<" "<<b<<" "<<c<<endl;  


    return 0;
}