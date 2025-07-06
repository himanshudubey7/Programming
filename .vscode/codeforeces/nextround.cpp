#include<iostream>

using namespace std;
int main(){
    int n, k;
    int i;
    int count = 0;
    //cout<<" enter value of n and k"<<endl;

    cin>>n>>k;
    int arr[n];
    //cout<<" enter elements in array"<<endl;
    for(i =0; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        count++;
    }
    cout<<count<<endl;
    return 0;
}