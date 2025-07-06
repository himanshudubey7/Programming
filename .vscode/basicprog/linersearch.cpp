#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int linersearch(int arr[], int n , int k)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int n;//size of array
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element you want to search"<<endl;
    cin>>k;
    cout<<linersearch(arr, n,k)<<endl;
    return 0;
}