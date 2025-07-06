//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n, m;
    cin>>n>>m;
    int ar[n];
   vector<int>neg;
   vector<int>pos;

    int p = 0;
for(int i = 0;i<n;i++){
    cin>>ar[i];
}
sort(ar, ar+n);
int i = 0;
int sum = 0;
while(m--){
    if(i<n){
        if(ar[i]<0){
    sum +=(-1*ar[i]);
        }
        i++;
    }
  
    else{
        break;
    }
}
cout<<sum<<endl;
    return 0;
}



