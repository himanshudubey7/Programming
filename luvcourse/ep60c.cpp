#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
vector<bool> isprime(N,1);
vector<int> divisors[N];
int main(){
    // HOW TO PLAY WITH DIVISORS OR MULTIPLES BASICALLY HOW WE CAN STORE THEM 
    isprime[0] = isprime[1]  = 1;
    for(int i = 2; i<N;i++){
        for(int  j = i;j<N;j+=i){
            divisors[j].push_back(i);

        }
    }
    for(int i = 1;i<10;i++){
        for(int div: divisors[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }

    return 0;
}