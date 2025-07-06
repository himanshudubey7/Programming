//author: Ghostyy :D


#include<bits/stdc++.h>
 
using namespace std;
const int N = 2e5+10;
long long people[N];
long long apartment[N];
 
int main(){
    int n, m ;long long k;
    cin>>n>>m>>k;
    long long  cnt =0;
    for(int i = 0;i<n;i++)  cin>>people[i];
    for(int i = 0;i<m;i++)   cin>>apartment[i];

    sort(people , people+n);
    sort(apartment, apartment+m);
    int i =0 , j= 0;
    int ans = 0;
    while(i<n && j<m){
        if(abs(people[i] - apartment[j])<=k){
            i++;
            j++;
            ans++;
        }
        else if(people[i] - apartment[j]>k){
            j++;
 
        }
        else
        {
            i++;
        }
    }
     
    cout<<ans<<"\n";
 
    return 0;
}