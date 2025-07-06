//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    vector<int> vt;
    for(int i= 1;i<=3000;i++){
        if(i%3!=0 ){
            string s = to_string(i);
            if(s[s.length()-1]!='3'){
                vt.push_back(i);
            }
        }
    }
    while(t--){
        int k;
        cin>>k;
        cout<<vt[k-1]<<endl;

    }
    return 0;
}