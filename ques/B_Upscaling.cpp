//author: Ghostyy :D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<char>> v(2*n,vector<char>(2*n));
        int f=0;
        int ix=0;
        int r=n;
        while(n>0){
                int cn=0;
                for(int i=0;i<2*r;i+=2){
                    if(cn%2==0){
                        if(f==0){
                            v[ix][i]='#';
                            v[ix][i+1]='#';
                        }
                        else{
                             v[ix][i]='.';
                            v[ix][i+1]='.';
                        }
                    }
                    else{
                        if(f==1){
                            v[ix][i]='#';
                            v[ix][i+1]='#';
                        }
                        else{
                             v[ix][i]='.';
                            v[ix][i+1]='.';
                        }
                    }
                    cn++;
                   
                }
                cn=0;
                ix++;
                for(int i=0;i<2*r;i+=2){
                    if(cn%2==0){
                        if(f==0){
                            v[ix][i]='#';
                            v[ix][i+1]='#';
                        }
                        else{
                             v[ix][i]='.';
                            v[ix][i+1]='.';
                        }
                    }
                    else{
                        if(f==1){
                            v[ix][i]='#';
                            v[ix][i+1]='#';
                        }
                        else{
                             v[ix][i]='.';
                            v[ix][i+1]='.';
                        }
                    }
                    cn++;
                   
                }
                f=1-f;
                n-=1;
                ix++;

            

        }
        for(int i=0;i<2*r;i++){
            for(int j=0;j<2*r;j++){
                cout<<v[i][j]<<"";
            }
            cout<<endl;
        }
        // cout<<endl;
    }
    
}