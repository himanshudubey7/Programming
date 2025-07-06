/*
USE OF LOWER BOUND AND UPPER BOUND FUNCTIONS 
for arrays
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr = lower_bound(a, a+n,5);   //O(log(n))
    if(ptr==(a+n))
    {
        cout<<"NOT Found"<<endl;
        return 0;
    }
    cout<<(*ptr)<<endl;
cout<<endl;
    int *str = upper_bound(a, a+n,5);//O(log(n))
    if(str==(a+n))
    {
        cout<<"NOT Found"<<endl;
        return 0;
    }
    cout<<(*str)<<endl;

    
    return 0;
}