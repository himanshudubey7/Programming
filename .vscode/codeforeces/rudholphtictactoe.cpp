#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ar[3][3];
// input of the field:

        for(int i = 0;i<3 ;i++){
            for(int j = 0;j<3;j++){
                cin>>ar[i][j];
            }
        }
        int flag = 0;
       if((ar[0][0] == ar[0][1])&&(ar[0][0] == ar[0][2]) && ar[0][0] !='.')
       {
        flag = 1;
        cout<<ar[0][0]<<endl;
       }
       // cout<<"failed 1"<<endl;
     else  if((ar[0][0] == ar[1][0])&& (ar[0][0] == ar[2][0]) && ar[0][0] !='.')
       {
        flag = 1;
        
        cout<<ar[0][0]<<endl;
       }
      // cout<<"failed 2"<<endl;
       else if((ar[0][0] == ar[1][1])&&(ar[0][0] == ar[2][2]) && ar[0][0] !='.')
       {
        flag =1 ;
        cout<<ar[0][0]<<endl;
       }
       //cout<<"failed -3"<<endl;
      else if((ar[1][0] == ar[1][1])&&(ar[1][0] == ar[1][2]) && ar[1][0] !='.')
       {
        flag = 1;
        cout<<ar[1][0]<<endl;
       }
      // cout<<"failed 4"<<endl;
      else if((ar[2][0] == ar[2][1])&&(ar[2][0] == ar[2][2]) && ar[2][0] !='.')
       {
        flag =1;
        cout<<ar[2][0]<<endl;
       }
      // cout<<"failed 5"<<endl;
       else if((ar[0][1] == ar[1][1])&&(ar[0][1] == ar[2][1]) && ar[0][1] !='.')
       { 
         flag = 1;
        cout<<ar[0][1]<<endl;
       }
      // cout<<"failed 6"<<endl;
       else if((ar[0][2] == ar[1][2])&&(ar[0][2] == ar[2][2]) && ar[0][2] !='.')
       {
        flag = 1;
        cout<<ar[0][2]<<endl;
       }
       //cout<<"failed 7"<<endl;
     else  if((ar[2][0] == ar[1][1])&&(ar[2][0] == ar[0][2]) && ar[2][0] !='.')
       {
        flag = 1;
        cout<<ar[2][0]<<endl;
      // cout<<"failed 8"<<endl;
       }
       else if(flag == 0)
       cout<<"DRAW"<<endl;
       
       
       
       

       
       

    }
    return 0;
}