#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long ar[n];
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin>>ar[i];
      
    }
    sort(ar,ar+n);
    int alice = 0;
    int bob = 0;
    if(ar[0] %2 ==0){
        bob++;
         for(int i = 1;i<n;i++){
        if(ar[i]%2 ==0){
            bob++;
        }
        else{
            alice++;
        }
    }
    }
    else if(ar[0]%2!=0) {
        alice++;
           for(int i = 1;i<n;i++){
        if(ar[i]%2 ==0){
            alice++;
        }
        else{
            bob++;
        }
    }
    }
    // int f1 = 0;
    // int f2 = 1;
    // for(int i = 0;i<n;i++){
    //     if(ar[i]%2 == 0 && f1 == 0 && f2 == 1){
    //         bob++;
    //         f1 = 0;
    //         f2 =1;
    //     }
    //     else if(ar[i]%2 ==0 && f1 == 1 && f2 == 0){
    //       alice++;
    //       f2= 0;
    //       f1 = 1;
    //     }
    //     else if()
    // }
 if(alice>bob){
     cout<<"Alice"<<endl;
 }
 else if(bob>alice){
     cout<<"Bob"<<endl;
 }
 else{
     cout<<"Draw"<<endl;
 }
        
}

}
