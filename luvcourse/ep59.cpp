/*
SEIVE ALGORITHM:
Q<10^7 , N <= 10^7


If you have to deal with prime numbers and prime factorisation stuff then seive algo. comes 
really handy 
Like here in this problem we are give q queries and for each query we are given an integer N
 and we have to tell if it is prime or not:
 
*/


#include<bits/stdc++.h>

using namespace std;
const int N = 1e7+10;
vector<bool> isprime(N,1);

int main(){
    isprime[0] = isprime[1] = false;
    for(int i = 2;i<N;i++){
        if(isprime[i]){
            for(int j = 2*i;j<N;j+=i){
                isprime[j] = false;
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
    int x;
    cin>>x;
    if(isprime[x]){
        cout<<"Prime"<<endl;
    }
    else
    cout<<"not prime"<<endl;
    }
    
    return 0;
}