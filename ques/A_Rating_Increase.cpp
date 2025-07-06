//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        string str;
        string st1;
        long long temp2;
        long long temp ;
   for(int i = 0;i<n-1;i++){
   
    str=(s.substr(0,i+1));
    st1=(s.substr(i+1,n-(i+1)));
 //  cout<<str<<" "<<st1<<endl;
    if(st1[0] == '0'|| str[0] == '0'){
        continue;
    }
    else{
        temp = stoi(str);
        temp2 = stoi(st1);
        if(temp<temp2){
            break;
        }
    }
   }
   if(temp>=temp2 || st1[0] == '0')
   cout<<"-1"<<endl;
   else
   cout<<temp<<" "<<temp2<<endl;
    }
    
    return 0;
}