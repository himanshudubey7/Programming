//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int ar[26];
int br[26];
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.length();
    int l2 = s2.length();
    string s;
    cin>>s;
int flag = 0;
    int l = s.length();
    for(int i =0;i<l1;i++){
        ar[s1[i]-'A']++;
    }
    for(int i =0;i<l2;i++){
        ar[s2[i]-'A']++;
    }
    
     for(int i =0;i<l;i++){
        br[s[i]-'A']++;
    }
    
     for(int i =0;i<26;i++){
       if(ar[i] != br[i]){
        flag = 1;
        break;
       }
    }
    if(flag == 1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}