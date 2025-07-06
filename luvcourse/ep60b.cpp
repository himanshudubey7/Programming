/* 
How to store the prime numbers according to the count of the factors in a map
*/

#include<bits/stdc++.h>

using namespace std;
const int N = 1e7+10;
vector<bool> isprime(N,1);
vector<int> lp (N,0), hp(N,0);
int main(){
  for(int i = 2;i<N;i++){
    if(isprime[i] == true){
    for(int j = 2*i;j<N;j+=i){
      isprime[j] = false;
      hp[j] = i;
      if(lp[j] == 0){
        lp[j] = i;
      }

        
    }
  }
  }

map<int, int > prime_fac;
int n;
cin>>n;// enter number whose prime factorization needs to ve stored 
while(n>1){
  int prime= hp[n];
  while(n%prime == 0){
    n/=prime;
    prime_fac[prime]++;
  }
}
for(auto fac: prime_fac){
  cout<<fac.first<<" "<<fac.second<<endl;
}


    
    return 0;
}