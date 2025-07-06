// 
// #include<bits/stdc++.h>

// using namespace std;
// const int N = 1e5+10;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0); cout.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n == 1 || n== 0){
//             cout<<"YES"<<endl;
//             continue;
//         }
//      
//         if(flag){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }
    
//     return 0;
// }
//author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    while(n>0){
        int r=n%10;
        if(r==1 || r==0){
            n=n/10;
            continue;
        }
        return false;
    }
    return true;
}

int  main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
       int flag = 0;
//         vector<int> vt = {10,11,100,101,110,111,121,1000,1001,1010,1011,1100,1101,
//1110,1111,1210,1221,1331,10000,10001
//         ,10010,10011,10100,10101,10110,10111,10201,11000,11001,11010,11011,11100,11101,12210,12221,12321,13310,13421,14641,100000};
//         int temp =0;
//         for(auto it: vt){
//             if(n == it){
//                 flag = 1;
//                 break;
//             }
//         }
    for(int i=1;i<1e5;i++){
        if(check(i)){
            v.push_back(i);
        }
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int ix=v.size()-1;
        while(n>0 && ix>=0){
            if(n%v[ix]==0 && v[ix]!=1){
                n=n/v[ix];
                continue;
            }
            ix--;
        }
        if(n>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
}