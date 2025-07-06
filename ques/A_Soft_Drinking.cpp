//author: Ghostyy :D
#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int main(){
    int n , k , l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int soda = (k*l);
    int lime = c*d;
    int cnt = 0;

    while(soda>=nl && lime>0 && p>=np ){
        cnt++;
        soda = soda-nl;
        lime--;
        p = p-np;
        // cout<<"soda = "<<soda<<"cnt = "<<cnt<<endl;
        // cout<<"salt = "<<p<<"cnt = "<<cnt<<endl;
        
        
    }
   // cout<<cnt<<endl;
    cout<<cnt/n<<endl;
    return 0;
}