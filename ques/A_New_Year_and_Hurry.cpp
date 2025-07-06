//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e2+10;
    int pre[N];
int main(){
    
    pre[1] = 5;
    for(int i= 2;i<=10;i++){
        pre[i] = 5*(i) + pre[i-1];
    }
    int n, k ;
    cin>>n>>k;
    int time = 240 - k;
    //cout<<time<<endl;

int cnt =0;
int flago =0;
    for(int i = 1;i<=n;i++){
        if(time<pre[i]){
            cnt = i;
            flago= 1;
            break;
            

        }
      // cout<<pre[i]<<" ";
    }

  //  cout<<endl;
  if(flago == 1)
   cout<<cnt-1<<endl;
   else if(flago == 0){
    cout<<n<<endl;
   }

    return 0;
}