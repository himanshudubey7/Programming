//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n, m;
    cin>>n>>m;
          int flag = -1;
    for(int i =0;i<n;i++){



          if(i%2==0){
        for(int j = 0;j<m;j++){
                cout<<"#";
            }
        cout<<endl;
                ++flag;
          }
          
          if(i%2 !=0){
            for(int j = 0;j<m;j++){

            if(j== m-1 && flag%2==0){
                cout<<"#";
               
            }
            else if(j == 0 && flag%2!=0){
                cout<<"#";
                
            }
            else
            {
            cout<<".";
            }

            }
            cout<<endl;
          }
        }
    return 0;
    }
