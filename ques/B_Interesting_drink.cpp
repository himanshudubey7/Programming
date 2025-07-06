//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i= 0;i<n;i++){
        cin>>ar[i];
    }
 sort(ar, ar+n);
  int q;
    cin>>q;
    int ans ;
   while(q--)
    {
        long long x;
        cin>>x;
        ans=upper_bound(ar,ar+n, x)-ar;
        cout<<ans<<endl;
    }


    

    return 0;
}


/*
3,10, 8 , 6, 11-----> 3,6,8,10,11



*/