//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    char ch;

    int n, m;
    cin>>n>>m;
    int flag = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>ch;
            if(ch =='C'|| ch== 'M'||ch == 'Y'){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(flag ==1 ){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
    return 0;
}