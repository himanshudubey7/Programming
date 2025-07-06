//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int ar[n+1];
    for(int i = 1;i<=n;i++){
        cin>>ar[i];
    }
    int index;
    

    for(int i = 1;i<n;i++){
        if((ar[i]%2) != (ar[i+1]%2)){
            index = i;
        }
    }
    if(index == n-1 && (ar[index]%2 == ar[n-2]%2))
    {
        cout<<index+1<<endl;
    }
    else
    {
        cout<<index<<endl;
    }
   
    return 0;
}