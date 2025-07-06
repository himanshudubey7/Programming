//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
   
        int n;
        cin>>n;
        int cnt_positve = 0;
        int undetected  =  0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(x>0){
                cnt_positve +=x;
            }
                else if(x<0){
                    if(cnt_positve>0){
                        cnt_positve--;
                        
                    }
                    else
                    {
                        undetected++;
                    }

                }
            }
            cout<<undetected<<endl;
    return 0;
    }
