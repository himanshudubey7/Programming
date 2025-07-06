#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        int flag = 0;
        for(int i=0;i<(2*n)-1;i++){
       cnt=0;

            
            for(int j=0; j<2*n; j++){
                if(a[i]==a[j]){
                    cnt++;
                }
                if(cnt  ==  3){
                   flag =1;
                    break;
                }
         }
        }
if(flag == 1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}
        
    }
	
	return 0;
}