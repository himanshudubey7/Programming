/*
SELECTION SORT:
Find the minimum  element in unsorted array and swap it with element at begining 
*/
#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
     int n;//size of array
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"the sorted array is"<<endl;
    for(int i = 0 ;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}