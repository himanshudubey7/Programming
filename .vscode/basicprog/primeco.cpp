#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    if(n == 1 || n== 0){
        cout<<"invalid input"<<endl;
        return 0;
    }
    if( n == 2){
        cout<<"prime"<<endl;
        return 0;
    }

    else if(n>2){
        int flag =0;
        for(int i=2;i<n;++i){
            if(n%i == 0){
                cout<<"composite"<<endl;
                flag = 1;
                return 0;
            }
        }
        if(flag == 0){
            cout<<"prime"<<endl;
        }

    }
    return 0;
}