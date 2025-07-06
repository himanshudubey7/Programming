// // print subsets(powerset)

// #include<bits/stdc++.h>
// using namespace std;
// void solve(string ip, string op){
//     if(ip.size() == 0){
//         cout<<op<<endl;
//         return ;
//     }
//     string op1 =  op;
//     string op2 = op;
//     op2.push_back(ip[0]);
//     // make input small
//     ip.erase(ip.begin()+0);
//     solve(ip, op1);
//     solve(ip, op2);
   

// }


// int main(){
//     cout<<"enter input string"<<endl;
//     string s;
//     cin>>s;
//     string op = "";
// cout<<"the subsets are: "<<endl;
//     solve(s, op);


//     return 0;
// }