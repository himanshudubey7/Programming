/*
This program demonstrates the working of prefix sum technique ;


Ques:
Given an array a[] of N integers . Given Q queries and in each query given L and R
print sum of array elements from L index to R (included ).


Contraints:
1<=N<= 10^5
1<=a[i]<= 10^9
1<= Q<= 10^5
1<= L,R <= N



using prefix sum technique we create a array of prefix sum ith index stores the 
sum of elements of array till i .
pf[i] --> denotes 1 to i sum .
we need :
l to r  sum 
so pf[r] --> 1 to r sum 
pf[l] --> 1 to l sum 
so for l to r sum ---> pf[r] - pf[l-1]



*/


#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
int n;
cin>>n;
for(int i =1;i<=n;i++){
    cin>>a[i];
    pf[i] = pf[i-1] + a[i];//storing sum till ith element
}
int q;
cin>>q;
while(q--){
    int l, r;
    cin>>l>>r;
    cout<<pf[r]-pf[l-1]<<endl;

}
    
    return 0;
}