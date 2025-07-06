//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
      string s1 , s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    int flag = 0;
    if(s1.find(s2)!= string::npos){
        flag = 1;
    }
    if(flag == 1){
        cout<<"Found"<<endl;
    }
    else
    cout<<"Not Found"<<endl;
    return 0;
}