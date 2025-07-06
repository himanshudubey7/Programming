#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int seg[4*100005];
int lazy[4*100005];


void rangeupdate(int ind , int low , int high , int l , int r, int val){
    if(lazy[ind]!=0){
        seg[ind]+= (high-low+1)*lazy[ind];
        if(low!=high){
            lazy[2*ind+1] += lazy[ind];
            lazy[2*ind+2] += lazy[ind];
        }
        lazy[ind] = 0;
    }
    // not in the range
    if(r<low || l>high|| low>high)
    return ;
    
    // completly in the range
    if(low>=l && high<=r){
        seg[ind] +=(high-low+1)*val;
        if(low!=high){
            lazy[2*ind+1] +=lazy[ind];
            lazy[2*ind+1] += lazy[ind];
        }
        return ;
    }
    // partially in the range
    int mid = (low+high)/2;
    rangeupdate(2*ind+1, low , mid, l , r, val);
    rangeupdate(2*ind+2, mid+1, high, l , r, val);
    seg[ind] = seg[2*ind+1]+seg[2*ind+2];
}

int querrylazy(int ind , int low ,int high, int l , int r){
    if(lazy[ind]!=0){
        seg[ind]+= (high-low+1)*lazy[ind];
        if(low!=high){
            lazy[2*ind+1] += lazy[ind];
            lazy[2*ind+2] += lazy[ind];
        }
        lazy[ind] = 0;
    }
    if(r<low || l>high || low>high)
    return 0;
    if(low>=l && high<=r){
        return seg[ind];
    }
    int mid = (high+low)/2;
    return querrylazy(2*ind+1, low ,mid, l, r) + querrylazy(2*ind+2, mid+1, high , l , r);
}
void build(int ind , int low , int high){
    if(low == high){
        seg[ind] = ar[low];
    }
    int mid = (low+high)/2;
    build(2*ind+1, low , mid);
    build(2*ind+2, mid+2, high);
    
}


int main(){
    int n;
    cin>>n;
    for(int i= 0;i<n;i++){
        cin>>ar[i];
    }
    build(0, 0, n-1);
}
