//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       string st ;
       st+= s[0];
       st+=s[1];

        // cout<<st<<endl;
        int p = stoi(st);
         if(p == 0){
            cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
        }
        
       else  if(p>12){
            p = p-12;
            if(p<10)
            cout<<0<<p<<":"<<s[3]<<s[4]<<" PM"<<endl;
            else{
                cout<<p<<":"<<s[3]<<s[4]<<" PM"<<endl;
            }
        }
        else if( p == 12){
            cout<<s<<" PM"<<endl;
        }
        
        else{
            cout<<s<<" AM"<<endl;;
        }
        

    }
    return 0;
}