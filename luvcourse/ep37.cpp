/*
USE OF LAMDA FUNCTION 
AND USE OF  all_of(), any_of(), and none_of() algorithims
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v= { -2,3,-5};
    cout<<all_of(v.begin(), v.end(),[](int x){return x>0;})<<endl;

    cout<<any_of(v.begin(),v.end(),[](int x){ return x>0;})<<endl;

    cout<<none_of(v.begin(),v.end(),[](int x){ return x>0;})<<endl;

    
    
    return 0;
}