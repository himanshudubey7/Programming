//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int ar[4];
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 2;
    ar[3] = 3;
    int next ;
 
    for(int i =0;i<n;i++){
        if(i <4){
            
                cout<<ar[i]<<" ";
        }

            
        else{
        next = ar[0] + ar[1] + ar[2]+ ar[3];
       ar[0] = ar[1];
       ar[1] = ar[2];
       ar[2] = ar[3];
       ar[3] = next;
        cout<<next<<" ";
    }
    }

    cout<<endl;
    return 0;
}