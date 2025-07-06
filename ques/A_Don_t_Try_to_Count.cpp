//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s1, s2;
        cin>>s1>>s2;
        int op = 0;
        int flag = 0;
        while(n<=50){
            if(s1.find(s2) != string::npos){
            flag=1;
            break;
            
        }
            s1 +=s1;
            n+=n;
            op++;
             
        } 
       if(flag ==1){
        cout<<op<<endl;
       }
       else{
        cout<<"-1"<<endl;
       }

    }
    return 0;
}