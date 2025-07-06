// //author: Ghostyy :D
// # include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// ll mod = 1000000007;


// //--------------------------------------------------------------------------------------------------
// //binary exponentiation
// int exp(int base,int n){
//  int res=1;
//  while(n){
//      if(n%2){
//          res=res*base;
//          n--;
//      }
//      else{
//          base*=base;
//          n/=2;
//      }
//  }
//  return res;
// }
// //--------------------------------------------------------------------------------------------------
// //--------------------------------------------------------------------------------------------------
// //sieve of erastothenes
// vector<int> primes; // stores ith prime number at index i-1
// ll is_prime[1000001];

// void sieve() {
//     int maxN = 1000000;
//     for (int i = 1; i <= maxN; i++) is_prime[i] = 1;
//     is_prime[0] = is_prime[1] = 0;

//     for (int i = 2; i * i <= maxN; i++) {
//         if (is_prime[i]) {
//             for (int j = i * i; j <= maxN; j += i) {
//                 is_prime[j] = 0;
//             }
//         }
//     }
//     for (int i = 2; i <= maxN; i++) {
//         if (is_prime[i]) primes.push_back(i);
//     }
// }
// //--------------------------------------------------------------------------------------------------
// //--------------------------------------------------------------------------------------------------
// //primality check - checks if a number is prime or not
// bool isPrime(int n){
//  if(n==1) return false;
//  for(int i=2;i*i<=n;i++){
//      if(n%i==0) return false;
//  }
//  return true;
// }
// //--------------------------------------------------------------------------------------------------
// //--------------------------------------------------------------------------------------------------
// // An iterative binary search function and return  the index. 
// int binarySearch(int arr[], int l, int r, int x)
// {
//     while (l <= r) {
//         int m = l + (r - l) / 2;
//         if (arr[m] == x)
//             return m;
//         if (arr[m] < x)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return -1;
// }
// //--------------------------------------------------------------------------------------------------

// //--------------------------------------------------------------------------------------------------
// void solve(){
//   ll t;
//     cin>>t;
//     while(t--){
//         // cout<<"NEW TEST"<<endl;
//         int n, m;
//         cin>>n>>m;
       
//         vector<ll> ar(n);
//         vector<ll> br(m);
//         for(int i= 0;i<n;i++){
//             cin>>ar[i];
//         }
        
//         for(int i= 0;i<m;i++){
//             cin>>br[i];
//         }
//         if(n == 1){
//             cout<<"YES"<<"\n";
//             continue;
//         }
//         sort(begin(br),end(br));
        
//         for(int i= 0;i<m;i++){
//             ar[0] = min(br[i] - ar[0], ar[0]);// make the first element minimum
//         }
//         int flag = 0;
//         for(int i = 1;i<n;i++){
//             ll diff = (ar[i] + ar[i-1]);


//             if(max(br[m-1]-ar[i], ar[i])<ar[i-1]){
//                 flag = 1;
//                 break;
//             } 

//             int it = lower_bound(br.begin(), br.end(), diff)- br.begin();
//             if(ar[i]>=ar[i-1]){
//                 // cout<<it<<endl;
//             ar[i] = min(br[it]-ar[i], ar[i]);
//             // cout<<ar[i]<<endl;
//             }
//             else{
//             ar[i] = br[it]-ar[i];
//             }

//         }
// // cout<<endl;
//     //    for(int i= 0;i<n;i++){
//     //     cout<<ar[i]<<" ";
//     //    }
//     //    cout<<endl;

//         if(flag){
//             cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }

//     }



// }

// //--------------------------------------------------------------------------------------------------
// int main()
// {
//  fast
// solve();
// return 0;
  
// }


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateCyclicShifts(const vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> cyclicShifts;  

    
    vector<int> doubleArr(arr.begin(), arr.end());
    doubleArr.insert(doubleArr.end(), arr.begin(), arr.end()); 
    for (int i = 0; i < n; i++) {
        vector<int> shift(doubleArr.begin() + i, doubleArr.begin() + i + n);
        cyclicShifts.push_back(shift);
    }

    return cyclicShifts;
}

void printCyclicShifts(const vector<vector<int>>& shifts) {
    for (const auto& shift : shifts) {
        for (int num : shift) {
            cout << num << " ";
        }
        cout << endl;
    }
}


int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n , m;
	    cin>>n>>m;
	    vector<int> ar(n);
	    vector<int> br(n);
	    for(int i= 0;i<n;i++){
	        cin>>ar[i];
	    }
	    for(int i= 0;i<m;i++){
	        cin>>ar[i];
	    }
	    vector<int> arr = br;
	    generateCyclicShifts(arr);
	    
	}
}
