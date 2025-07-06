//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    int a, b;
    cin>>a>>b;
    int time = a;
while(a >=b){
    a = a-b;
    a++;
    time++;

}
cout<<time<<endl;

    return 0;
}