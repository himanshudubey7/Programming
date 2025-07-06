//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while(t--){
        //cout<<"this is test case "<<t<<endl;
        int temp =0;
        int op = 0;
        int n, k;
        cin>>n>>k;
        int p =k;
        string s;
        cin>>s;

        for(int i = temp;i<n;i++){
            if(s[i] == 'B'){
                temp = i;
                int flag = 0;
                while(k-- && temp<n){
                    if(s[temp] == 'B'){

                        s[temp] ='W';
                        flag = 1;
                    }
                    temp++;
                
                } 
                k = p;   
                if(flag == 1){
                    //cout<<s<<endl;
                    op++;
                }
        }
       

        }
        cout<<op<<endl;
    }
    return 0;
}