/*

LINEAR SEARCH : GO THROUGH EVERY ELEMENT :

                         TIME COMPLEXITY IS O(N)
 
 In this episode we willl study about BINARY SEARCH  and how it can be implemented in 
 advanced questions.


*/

#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int to_find;
    cin>>to_find;
    int lo = 0;
    int hi =n-1;
    int mid;
    while(hi-lo>1){
        int mid = (hi+lo)/2;
        if(v[mid]<to_find)
        {
            lo = mid+1;
        }
        else //(v[mid] >= to_find)
        {
            hi = mid;
        }
    }
    if(v[lo] == to_find)
    {
        cout<<lo<<endl;
    }
    else if(v[hi] == to_find){
        cout<<hi<<endl;
    }
    else{
        cout<<"NOt found"<<endl;
    }
    
    return 0;
}