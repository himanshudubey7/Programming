#include<iostream>

#include<bits/stdc++.h>

using namespace std;
void printvec(vector<int> v)
{
    cout<<"size is "<<v.size()<<" ";
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;//currently size zero
    vector<double> v1;
    vector<pair<int,int>> v3;//vector of integer pair
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        vector <int> v2 = v;
        v2.push_back(5);
        printvec(v2);
    printvec(v);
    
    //cout<<"size is "<<v.size()<<endl;
    }
    printvec(v);

    return 0;
}