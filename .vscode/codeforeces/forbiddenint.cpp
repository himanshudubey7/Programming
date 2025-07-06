/*
vector<int> v;
int sum ;
case :
n, k =1 , x= 1;
cout<<no

 case :
 n , k= 2, x = 1,2
 if(x ==1)
 n%2 ==0 
 -- yes
 while(sum != n){
    sum = sum + 2;
    v.push_back(2);
 }
 
 else
 -- no
 
 if(x == 2)
 {
    cout<<yes
 }
 else
 cout<<yes<<endl;

*/



#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x != 1  && k >1){
            cout<<"Yes"<<endl;
            
        }
        else if(k<=2 && x ==1){
            if(n%2 == 0){

            cout<<"Yes"<<endl;
            
            }
            else
            cout<<"NO"<<endl;
            
                }
                else if(k>2 && x == 1){
                    cout<<"YES"<<endl;
                    
                }
    }
    return 0;
}