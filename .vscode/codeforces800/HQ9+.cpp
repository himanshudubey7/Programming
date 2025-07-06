#include<bits/stdc++.h>

using namespace std;
int main(){
    string p;
    cin>>p;
    int n = p.length();
    int flag =0;
    for(int i=0;i<n;i++){
        if(p[i] =='H' || p[i] == 'Q'|| p[i] == '9'  ){
      flag = 1;
        }
        
    }if(flag == 1)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
    return 0;
}
//DONE!!!