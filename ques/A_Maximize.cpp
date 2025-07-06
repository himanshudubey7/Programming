//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
bool isPrime(int n)
{
    // since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;
 
    // Run a loop from 2 to n-1
    for (int i = 2; i < n; i++) {
        // if the number is divisible by i, then n is not a
        // prime number.
        if (n % i == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
    
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
vector<int> v;
 int t;
    cin>>t;

   
   

    while(t--){
        int n;
        cin>>n;
     
cout<<n-1<<endl;
           }
    return 0;
        }
        
    
