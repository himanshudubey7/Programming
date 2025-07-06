/*

Here is another task for you, prepared by Monk himself. So, this is how it goes :

Given an integer array A of size N, Monk needs you to answer T queries for him. In each query, 
he gives you 2 integers P and Q. In response to each of these queries, you need to tell Monk 
the count of numbers in array A. that are either divisible by P, Q, or both.

Can you cope with this ?

Video approach to solve this question: here

Input Format :

The first line contains a single integer N denoting the size of array A. 
The next line contains N space separated integers, where the  integer denotes .

The next line contains a single integer T denoting the number of queries Monk poses to you. 
Each of the next T lines contains 2 space separated integers P and Q.




*/





#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
int hsh[N];
int multiple_cnt[N];

int main(){
    int n, t;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        hsh[x]++;
    }
    for(int i = 1;i<N;i++){
        for(int j = i;j<N;j+=i){
            multiple_cnt[i] += hsh[j];


        }
    }
    cin>>t;
    while(t--){
        int p, q;
        cin>>p>>q;
        long long lcm = p*1LL*q/__gcd(p,q);
        long ans = multiple_cnt[p]+multiple_cnt[q];
        if(lcm<N){
            ans-= multiple_cnt[lcm];
        }
        cout<<ans<<endl;   

        

    }
    return 0;
}