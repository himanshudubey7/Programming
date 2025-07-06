#include<bits/stdc++.h>

using namespace std;
int min_steps(string str){
    int n = str.length();
    int count =0;
    for(int i=0;i<n-1;i++){
        if(str[i] != str[i+1]){
            ++count ;

        }
    }
    if(str[n-1]!= str[n] ){
        ++count;
    }
    return count;

}
int main(){
    string s;
    cin>>s;
    int ans = min_steps(s);
    cout<<ans<<endl;

    return 0;
}