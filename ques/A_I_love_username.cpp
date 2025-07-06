//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n;
    cin>>n;
    int max  = INT_MIN;
    int min  = INT_MAX;                                                                                                                                                                                                                                                                                                                                                                                                                              
    int cnt = 0;
    int initial;
    cin>>initial;
int top = initial;
    for(int i = 1;i<n;i++){
        int x;
        cin>>x;
        if((x>top ) && (x>max)){
            cnt++;
            max = x;
        }
        else if(x<top && x<min){
            min = x;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}