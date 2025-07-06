#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int seg[4*100005];
void build(int ind , int low , int high){
    if(low == high){
        seg[ind] = ar[low];
        return ;
    }
    int mid = (low+ high)/2;
    build(2*ind+1, low, mid);
    build(2*ind+2, mid+1, high);
    seg[ind] = seg[2*ind+1]+seg[2*ind+2];
    return;
}
int query(int ind, int low , int high, int l, int r){
    if(low>=l && high<=r) 
    return seg[ind];

    if(high<l || low>r)
    return INT_MIN;
    

    int mid = (low + high)/2;
    int left = query((2*ind+1) , low , mid , l, r);
    int right = query(2*ind+2, mid+1 , high , l , r);
    return max(left , right);

}

//single update 
void pointupdate(int ind , int low , int high , int node , int val){
    if(low == high){
        seg[low] += val;
    }
    else{
        int mid = (low+ high)/2;
        if(node<=mid && node>=low){
            pointupdate(2*ind+1 , low , mid , node, val);
        }
        else{
            pointupdate(2*ind+2, mid+1 , high, node ,val);

        }
        seg[ind] = seg[2*ind+1]+ seg[2*ind+2];// add values when backtracking 
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    build(0, 0 , n-1);
    int q;
    cin>>q;
    while(q--){
        int l , r;
        cin>>l>>r;
        int ans= query(0, 0, n-1, l,r );
    }


    return 0;
}