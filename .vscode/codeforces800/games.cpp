#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    int home[n];
    int away[n];
    for(int i = 0;i<n;i++){
        int a, h;
        cin>>a>>h;
        home[i] = h;
        away[i] = a;
    }
    for(int i = 0;i<n;i++){
       int  host_team = home[i];
       int guest_team = away[i];
    for(int j = i+1;j<n;j++){
        if(host_team == away[j])
        {
            count++;
        }
        if(guest_team == home[j])
        {
            count++;
        } 

    }
   // cout<<"value of count till team "<< i << " = "<<count<<endl;
    }
    cout<<count<<endl;
    return 0;
}