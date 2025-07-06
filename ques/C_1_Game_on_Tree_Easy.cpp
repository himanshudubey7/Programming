//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n, t;
    cin>>n>>t;
    vector<int> v(n+1, 0);
    vector<pair<int,int>> p;
    for(int i= 0;i<n-1;i++){
        int x, y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    int k ;
    cin>>k;
    v[k] = 1;
    int flag = 0;
    sort(v.begin(), v.end());
    
    int i = 0;
    
    while(true){
        if(i>= p.size()){
            break;
        }
        if(p[i].first == k && v[p[i].second] == 0){
            v[p[i].second] = 1;
            k = p[i].second;
            if(flag)
            {
                flag = 0;
            }
            else{
                flag = 1;
            }
           
        }
        else if(p[i].first == k && v[p[i].second] == 1){
            break;
        }
       
        i++;
    }
    if(flag){
        cout<<"Ron"<<endl;
    }
    else{
        cout<<"Hermione"<<endl;
    }
   
    return 0;
}
