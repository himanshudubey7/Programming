//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int n;
    cin>>n;

    vector<int> odd;
    vector<int> even;
    int ar[n];
    for(int i = 0;i<n;i++){
        cin>>ar[i];
        if(ar[i]%2 == 0)
        even.push_back(ar[i]);
        else
        odd.push_back(ar[i]);

    }
    if(n<5){
        cout<<-1<<endl;
    }
    else{
        if(n%2 !=0){
            for(int i= 0;i<odd.size();i++){
                cout<<odd[i]<<" ";
            }
            for(int i = 0;i<even.size();i++){
                cout<<even[i]<<" ";
            }
        }
        else {
            swap(even[even.size()-1], even[even.size()-2]);
              for(int i= 0;i<odd.size();i++){
                cout<<odd[i]<<" ";
            }
            for(int i = 0;i<even.size();i++){
                cout<<even[i]<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}