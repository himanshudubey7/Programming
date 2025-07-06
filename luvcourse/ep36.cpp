#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto min =*min_element(v.begin(),v.end());
    cout<<min<<endl;

    auto max = *max_element(v.begin(),v.end());
    cout<< max<<endl;
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct = count(v.begin(),v.end() , 6);
    cout<<ct<<endl;
    auto it = find(v.begin(),v.end(),2);
    if(it == v.end())
    {
        cout<<"not found"<<endl;
    }
    else
    cout<<*it<<endl;

    reverse(v.begin(),v.end());
    for(auto val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //for string
    string s = "asdfashfhsda";
    reverse(s.begin(), s.end());
    cout<< s<<endl;


    return 0;
}