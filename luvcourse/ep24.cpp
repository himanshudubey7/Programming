/*
AUTO KEYWORD AND RANGE BASED LOOPS

see notebook notes for auto keyword 

*/


#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>v = {2,3,4,5,6};
    for(int val : v)//copy of elements will come to val so if you want to make changes
//in the original vector you have to use reference  
    {
        cout<<val<<" ";
    }
    cout<<endl;

    // to make changes use reference 
    for(int &val : v)
    {
        val++;
        cout<<val<<" ";
    }
    cout<<endl;

    //similary we can use range based loops for vector-pair nesting
    vector<pair<int, int>>v_p={{1,2},{2,3},{4,6}};
    for(pair<int, int> & value: v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    
    return 0;
}