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
        int n;
        cin>>n;
        int ar[n];
        for(int i = 0;i<n;i++){
            cin>>ar[i];
        }
        long long cnt = 0;
        //count for the last element;
        int ded=n-1;
        int flag = 0;
       for(int i= n-2;i>=0;i--){
        if(ar[n-1] == ar[i] && flag ==0){
           
            ded = i;
            
        }
        else {
            flag = 1;
            cnt++;
        }
       }
    //    cout<<cnt<<" "<<ded<<endl;
       // count for the first eleement;
       int index=0;

       long long cnt2 = 0;
       int flag2 = 0;
       for(int  i = 1;i<n;i++){
        if(ar[0]== ar[i] && flag2 == 0){
           
            index = i;
        }
        else{
        flag2 = 1;
        cnt2++;
        }
       }
    //    cout<<cnt2<<" "<<index<<endl;
       long long amt  = 0;
    //    cout<<cnt<<" "<<cnt2<<endl;
    //    cout<<index<<" "<<ded<<endl;
if(cnt ==0 || cnt2 ==0){

cout<<0<<endl;
}
else if(ar[0] == ar[n-1]){
cout<<(ded-(index+1))<<endl;
}
else
    cout<<min(cnt, cnt2)<<endl;
    }
    return 0;
}