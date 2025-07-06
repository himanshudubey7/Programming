//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
long long ar[N];
int main(){
  long long n , x;
  cin>>n>>x;
  for(long long i = 0;i<n;i++){
    cin>>ar[i];
  }
  sort(ar, ar+n);
  long long i =0;
  long long j = n-1;
  long long sum = 0;
  long long cnt = 0;
  while(i<=j){
    sum = ar[i]+ar[j];
    if(sum>x){
      j--;
      cnt++;
    }
    else if(sum <=x){
      i++;
      j--;
      cnt++;
    }
    else if(i ==j){
      cnt++;
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
  }
  cout<<cnt<<endl;
  return 0;
}