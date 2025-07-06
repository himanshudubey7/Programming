#include<bits/stdc++.h>

using namespace std;
int main(){
    bool is_prime  = true;
    int n;
    cin>>n;
    vector<int > prime_factor;
    for(int i = 2 ;i*i<=n ;i++){
        while(n%i == 0){
            prime_factor.push_back(i);
            n = n/i;
        }
       
    }
     if(n>1){
            prime_factor.push_back(n);
        }
    for(int prime: prime_factor){
        cout<<prime<<" ";
    }
    return 0;

}