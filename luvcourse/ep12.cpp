/*
This code explains the hashing technique:
Ques:
Given array a[] of N integers . Given Q queries and in each query given a number x ,
print count of that number in array .

Constraint :
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5




Basic code:

int main(){
    int n;
    cin>>n;
    a[n];
    for(int i =0;i<....){
        cin>>a[i];

    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int cnt =0;
        for(int i =0....)
        {
            if(x == a[i]){
                cnt++;
            }

        }
        cout<<cnt<<endl;
    }
}

The time complexity of the above code is:
O(N) + O(N*Q) === > it means approx 10^10 itearations that is not possible 
in 1 sec .


But after the hashing technique ... the time complexity reduces to 
O(N)+ O(N) +O(Q)===>  which is approx equal to 10^5 iterations. 

*/





#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
    int hsh[N];

int main(){
    int n;
    cin>>n;
    int ar[n];
    cout<<"enter array elements"<<endl;
    for(int i =0;i<n;i++){
        cin>>ar[i];
        hsh[ar[i]]++;
    }
      cout<<"enter no. of test cases"<<endl;
    int t;
    cin>>t;
    while(t--){
        cout<<"enter the no. you want to search"<<endl;
        int x;
        cin>>x;
     cout<<"the freq of the given number is "<<endl;
        cout<<hsh[x]<<endl;
    }
    return 0;
}