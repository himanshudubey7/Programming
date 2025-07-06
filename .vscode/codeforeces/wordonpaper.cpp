#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    char ar[8][8];
    while(t--){
        for(int i = 0;i<8;i++){
            for(int j = 0;j<8;j++){
                cin>>ar[i][j];
                
            }
        }
        string str;


        for(int i = 0;i<8;i++){
            for(int j = 0;j<8;j++){
               if(ar[i][j] !='.')
               {
                str = str+ar[i][j];

               }
                
            }

        }
        cout<<str<<endl;
    }
    return 0;
}