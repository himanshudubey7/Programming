//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
int ar[N];


int main(){
   ar[0] = ar[1] = 1;
for(int i =2 ;i<N;i++)
 {
    if(ar[i] == 0)
    {
        for(int j = 2*i;j<N;j+=i){
            ar[j] = 1;
        }
    }
}

set<long long> st;
for(int i = 2;i<N;i++){
    if(ar[i] == 0){
        st.insert((long long)i*i);
    }
}
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
  if(st.find(x)!= st.end()){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}

    return 0;
}