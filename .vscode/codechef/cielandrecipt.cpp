//author: Ghostyy :D

#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;




int ar[12];
int lojj;

int main()
{
    int lojj;

    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
for(int i =11;i>=0;i--){

    ar[11-i] = pow(2,i); 
   // cout<<ar[11-i]<<" ";
}  
    int t;
    cin>>t;
    while(t--){
       
        int p;
        cin>>p; //10
        int cnt = 0;  
        
        for(int i =0;i<12;i++){

        while(p>=ar[i]){

            p -=ar[i];
            ++cnt;
        }

        }
        cout<<cnt<<"\n";
    }
    return 0;
}