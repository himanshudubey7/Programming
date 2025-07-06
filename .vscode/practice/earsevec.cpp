#include <bits/stdc++.h>
using namespace std;


int main() {
    int N;
    cin>>N;
  vector<int>v[N];

    for(int i= 0;i<N;i++){
        int values;
        cin>>values;
        v->push_back(values);
    }
     int x;
     cin>>x;
    v->erase(v->begin()+(x-1));
     
     
     int a,b;
     cin>>a>>b;
     v->erase(v->begin()+(a-1) , v->begin()+(b-1));
     
     cout<<v->size()<<endl;
     for(auto element: v[0]){
        cout<<element<<" ";
     }
     
     
     
    return 0;
}
