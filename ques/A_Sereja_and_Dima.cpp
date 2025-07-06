//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];   
    }
    int sum1 = 0;
    int sum2 = 0;
    int flag = 0;
        int p = n-1;
    int i = 0;
    while(i<=p){
      
    if(ar[i]>=ar[p] && flag == 0){
        sum1 +=ar[i]; 
        i++;
      
        flag =1;
    }
    else if(ar[i]<ar[p] && flag ==0){
        sum1 +=ar[p];
        p--;
       
        flag = 1;
    }
     else if(ar[i]>=ar[p] && flag == 1){
        sum2 +=ar[i]; 
        i++;
       
        flag =0;
    }
     else if(ar[i]<ar[p] && flag ==1){
        sum2 +=ar[p];
        p--;
    
        flag = 0;
    }

    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}