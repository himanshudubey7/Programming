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
        string s;
        cin>>s;
        string str= s;
        reverse(str.begin(),str.end());
       int l = s.length();
       int flag = 0;

       for(int i= 0;i<l;i++){
        if(s[i]<s[l-1-i]){
           flag =1;
            break;
        }
        else if(s[i]>s[l-1-i]){
            flag =2;
            break;
        }
       }
       if(flag == 1){
        cout<<s<<endl;
       }
       else if(flag==2){
        cout<<str+s<<endl;

       }
       else{
        cout<<s<<endl;
       }
    }
    return 0;
}