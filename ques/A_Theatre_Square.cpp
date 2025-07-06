//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n,m;
    cin>>n>>m;
    int len_cnt= 0;
    int a;
    cin>>a;
    int bre_cnt = 0;
    while (n>0)
    {
        n = n-a;
        len_cnt++;
    }
    while(m>0){
        m = m-a;
        bre_cnt ++;
    }
    int total = len_cnt+ bre_cnt;
    cout<<total<<endl;
    
    return 0;
}