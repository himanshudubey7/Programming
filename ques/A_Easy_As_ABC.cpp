//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int ar[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>ar[i][j];
        }
    }
    /*
    (r,c+1) , (r-1, c+1), (r-1,c), ()
    
    */
   vector<pair<int,int>>pos={(0.1),{-1,+1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}};
   string ans = "CCC";
   string test;
   char t= 'C';
    for(int i =  0;i<3;i++){
        for(int j = 0;j<3;j++){
            char ch= ar[i][j];
            test+= ch;
            //for second character;
            
           

        
        }
    }
    return 0;
}