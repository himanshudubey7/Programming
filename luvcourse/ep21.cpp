/*pairs is a class that are used to store data of two data 
types or even pair up two containers*/
#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main(){
    pair<int , string>p;
    p=make_pair(2,"abc");// or p= {2,"abcd"};
    cout<<p.first<<endl;//2
    //sometimes we require to maitain a relation between two arrays hence we use pairs
    pair<int , int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}