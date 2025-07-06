//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
    vector<int> v;
        int n;
        cin>>n;
        int cnt = 0;
        int i = 1;
        while(n!=0){
            int rem = (n%10)*i;//5009 --- 9
            n= n/10;// 5009 --- 500
             i = i*10;
             if(rem!=0){
             ++cnt;
             v.push_back(rem);
             }
        }
        cout<<cnt<<endl;
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}