//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int flag = 0;

        if(a == 1 && b == 1){
            cout<<"No"<<endl;
           
        }
        
     else if(a%2 ==0 && a/2 !=b){
      
    
    cout<<"Yes"<<endl;
    
        }
   else   if(b%2==0 && (b/2 !=a)){
    cout<<"Yes"<<endl;
            flag = 1;
          
        }
   else{
    cout<<"No"<<endl;
   }   
    }
    return 0;
}