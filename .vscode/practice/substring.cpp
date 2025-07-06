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
    for(int i = 0;i<=n-m;i++){
        for(int j = 0;j<m;j++){
                //cout<<s1[i+j]<<endl;
            if(s1[i+j] !=s2[j]){
                break;
            }
            if(j == (m-1)){
                flag = 1;
                break;
            }
        }
        if(flag ==1){
            break;
        }
    }

    if(flag == 1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}