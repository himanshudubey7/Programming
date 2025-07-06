//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
string s;
cin>>s;
int cnt = 0;
string str = "1234567890";
int index = 0;
for (auto &i : s) {
    for(int j = 0;j<10;j++){
        if(str[j] == i){
            cnt = cnt+abs(index-j);
            index = j;
        }
    }

}
cout<<(cnt+4)<<endl;
        

      

    }
    return 0;
}