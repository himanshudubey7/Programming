//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<long long> b;
        vector<long long> c;
        long long a[n];
        for(int i = 0;i<n;i++){
        cin>>a[i];
        }
        sort(a, a+n);
        long long min = a[0];
    
        for(int i = 0;i<n;i++){
            if(min == a[i]){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }

        }
    //  int temp = a[0];
    //     for(int i =0;i<n;i++){
    //         if(a[i]>temp && a[i]%temp == 0){
    //             b.push_back(temp);
    //             c.push_back(a[i]);
    //             temp = a[i];

    //         }
    //         else if(a[i] == temp){
    //             c.push_back(a[i]);
    //         }
    //         else{
    //             c.push_back(a[i]);
    //             temp = a[i];
    //         }
    //     }
        if(c.size() == 0 || b.size() == 0)
        {
        cout<<"-1"<<endl;
        continue;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it: b){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto p: c){
                cout<<p<<" ";
            }
            cout<<endl;

         }


    }
    return 0;
}