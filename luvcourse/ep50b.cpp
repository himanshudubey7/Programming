/*
QUESTION ABOUT ELIMINATING DUPLICATES

Given an arrary a of integers . All integers
are present in even count except one.
Find that one integer which hads odd count 
in O(N) time complexity and O(1) space 
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans =0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        ans = ans^arr[i];
    }
    cout<<ans<<endl;

    
    return 0;
}