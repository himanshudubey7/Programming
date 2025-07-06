//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt1 =0;
        int cnt2  = 0;
        int ar[n];
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(x == -1){
                cnt2++;
            }
            else{
                cnt1++;
            }

            ar[i] = x;

        
        }

    int op = 0;
int temp ;
    int pro = 1;
    if(cnt2 > cnt1){
 if(cnt2- cnt1 == 1){
    op =1;
 }
 else if(cnt2- cnt1>1){
    op = ((cnt2-cnt1)-1);
 }
 temp = op;
    }

    for(int i = 0;i<n;i++){
    if(ar[i]==-1 && op!=0){
        ar[i] = 1;
        op--;
    }

    int pro = pro*ar[i];
 }

    if(pro == 1){
        cout<<temp<<endl;
    }
    else{
        cout<<temp+1<<endl;
    }
    

    }
    return 0;
}