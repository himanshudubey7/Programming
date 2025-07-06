// given 'n' then print numbers from 1 to n ;


#include<bits/stdc++.h>
using namespace std;
int print_num(int n ){
    if(n == 1){cout<<1<<endl;return 1;} 
    print_num(n-1);
    cout<<n<<endl;
}
int main(){
    int n ;
    cin>>n;
    print_num(n);
    return 0;
}