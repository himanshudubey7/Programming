/*
segment trees code to return sum in the list between given range l to r 
time complexity for building the segment tree would be O(N)
time complextiy for processing Q queries will be O(Q*log(N))



*/

#include<bits/stdc++.h>
using namespace std;
int ar[100005], seg[4*100005];
void build(int ind, int low , int high){
    if(low == high){
        seg[ind] = ar[low];
        return ;
    }
    int mid= (high+low)/2;
    build(2*ind+1, low, mid);
    build(2*ind+2 , mid+1 , high);
    seg[ind] = seg[2*ind+1]+ seg[2*ind+2];
    //  cout<<seg[ind]<<endl;
}
int query(int ind , int low , int high , int l , int r){
    // completly lie wala case
    if(low>= l && high<=r){
        return seg[ind];
    }
    // do not lie wala case
    if(high <l || low>r){
        return INT_MIN;
    }
    int mid = (low+high)/2;
    int left = query(2*ind+1, low , mid , l , r);
    int right = query(2*ind+2 , mid+1, high, l , r);
    return left+right;
}
int main(){
    int n ;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>ar[i];
    }
    build(0, 0 , n-1);
    int q;
    cin>>q;
    while(q--){
        int l , r;
        cin>>l >> r;
        int ans = query(0 , 0 , n-1, l , r);
        cout<<ans<<endl;
    }

    return 0;
}