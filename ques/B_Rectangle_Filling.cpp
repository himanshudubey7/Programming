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
        long long n, m;
        cin>>n>>m;
        
        long long ar[n][m];
        int flag1 = 0;
        int flag2 = 0;
      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char ch;
                cin>>ch;
                if(ch =='B'){
                    ar[i][j] = 0;
                }
                else{
                    ar[i][j] = 1;
                }

            }
        }
        if(n == 1){
            if(ar[0][0]!=ar[0][m-1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            continue;
        }
        if(m == 1){
                        if(ar[0][0]!=ar[n-1][0]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            continue;

        }
int flag3=0;
int flag4 = 0;
       for(int i= 1;i<m;i++){
        if(ar[0][i] == ar[0][i-1]){
            flag1= 1;
        }
        else{
            flag1=0;
            break;
        }
       }
         for(int i= 1;i<m;i++){
        if(ar[n-1][i] == ar[n-1][i-1]){
            flag2= 1;
        }
        else{
            flag2=0;
            break;
        }
       }
         for(int i= 1;i<n;i++){
        if(ar[i][0] == ar[i-1][0]){
            flag3= 1;
        }
        else{
            flag3=0;
            break;
        }
       }
         for(int i= 1;i<n;i++){
        if(ar[i][m-1] == ar[i-1][m-1]){
            flag4= 1;
        }
        else{
            flag4=0;
            break;
        }
       }
       if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1){
        cout<<"YES"<<endl;
       }
      else if(flag1 == 1 && flag2 == 1 && ar[0][0] != ar[n-1][m-1]){
        cout<<"NO"<<endl;
       }
       else if(flag4 == 1 && flag3 == 1 && ar[0][0] != ar[n-1][m-1]){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }


       
        
    }
    return 0;
}