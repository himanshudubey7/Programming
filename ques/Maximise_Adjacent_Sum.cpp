#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i= 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // vector<int>v2;
    // v2 =v;
   sort(v.begin(), v.end());
//    sort(v2.begin(), v2.end(),greater<int>());
   long long sum = 0;
   long long temp  = 0;
//   if(n==2){
//       cout<<v[0]+v[1]<<endl;
//       continue;
//   }
int lb = 0;
int ub= n-1;
int f1 = 0;
int f2 = 0;

while(lb<ub){
    temp = v[lb]+v[ub];
    if(f1 == 0){
        lb++;
        f1 =1;
    }
    else if(f1 ==1){
        ub--;
        f1=0;
        
    }
    sum +=temp;
// cout<<sum<<endl;
}

   cout<<sum<<endl;
}

}
