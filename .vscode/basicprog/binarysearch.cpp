//elements must be arranged in ascending or desending order
#include<iostream>

#include<bits/stdc++.h>
int binarysearch(int arr[], int n, int k)
{
    int s = 0;
    int end = n;
    while(s<=end)
    {
        int mid = (s+end)/2;
        if(mid == k)
        {
            return mid;
        }
        else if(k<mid)
        {
            end = mid-1;
        }
        else if(k>mid)
        {
            s = mid +1;
        }
    }
    return -1;
}

using namespace std;
int main(){
     int n;//size of array
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in array in sorted order"<<endl;
    for(int i =0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element you want to search"<<endl;
    cin>>k;
 int res =    binarysearch(arr, n,k);
 if(res == -1)
 {
    printf("NOt found");
 }
 else
 printf("found at position = %d",res);
    return 0;
}