// //author: Ghostyy :D
// #include<bits/stdc++.h>

// using namespace std;
// const int N = 1e5+10;
// int main(){
// long long n;
// cin>>n;
// while(n !=1){
//     cout<<n<<" ";
//     if(n%2==0){
//         n /=2;
//       //  cout<<n<<" ";

//     }
//     else{
//         n =3*n+1;
        
//       //  cout<<n<<" ";
//     }
// }
// cout<<1<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
cout<<n<<" ";
while(n!=1){
    if(n%2==0){
    n=n/2;
    cout<<n<<" ";
    }
    else {
       n=(n*3)+1;
       cout<<n<<" ";
    }
}
}