//DONE!!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    for(int i=0;i<n;++i)
    {
        
        cin>>arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        ar[arr[i]-1]=i+1;
    }
    for(int i=0;i<n;++i)
    {
        cout<<ar[i]<<" ";
    }


  
    return 0;
}