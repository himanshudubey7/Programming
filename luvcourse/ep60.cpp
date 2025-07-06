/* 
 variation in seive algorithm :
 Highest prime
 lowest prime
 prime factorisation 
 
*/

#include<bits/stdc++.h>

using namespace std;
const int N  = 1e7+10;
vector<bool> isprime(N,1);
vector<int > lp(N,0), hp(N,0);

int main(){
    isprime[0] = isprime[1] = false;
    for(int i = 2;i<N;i++){
        if(isprime[i]){
            lp[i] = hp[i] = i;
            for(int j = 2*i;j<N;j+=i){
                isprime[j]=false;
                hp[j] = i;
                if(lp[j] == 0){
                    lp[j] = i;
                }
            }
        }
    }
        int num ;
        cin>>num;
        vector<int> prime_fac;
        while(num>1){
            int prime_factor = hp[num];
            while(num %prime_factor == 0){
                num /= prime_factor;
                prime_fac.push_back(prime_factor);
            }
        }
    for(int prime: prime_fac){
        cout<<prime<<" ";
    }
for(int i = 1;i<=100;i++){
    cout<<lp[i]<< " "<<hp[i]<<endl;

}
    
    return 0;
}