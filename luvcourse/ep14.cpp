/*

You are given an array A of integers of size N . You will be given Q queries where
each query is represented by two integers L and R . You have to find the gcd of the 
array after exluding the part from range L to R inclusive (1 Based indexing) . 
You are guaranteed that after exluding the part of the array remaining array 
is non empty .


Input:
* First line of input contains an integer T denoting number of test cases.
* For each test case, first line will contain two space seperated integers N, Q,
* Next line contains N space seperated integers denoting array A .
* For next Q lines each line will contain a query denoted by two spaces seperatd 
L , R

Output:
For each query , print a single integer representing the anser of that query.

Constraints:

Subtask : 1;
* 2<= T,N<=100
1<= Q <= N 
1<=a[i]<= 10^5
1<=L,R<=N


Subtask #2: 60 points

2 ≤ T, N ≤ 105, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Sum of N over all the test cases will be less than or equal to 106.
Warning : Large IO(input output), please use faster method for IO.


sample input:
1
3 3
2 6 9
1 1
2 2
2 3

sample output:
3
1
2



*/




/*
Basic code:

#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,q;
    cin>>n>>q;
    int a[n];
    }
    for(int i =1 ;i<=n;i++){
        cin>>a[i];
    }
    while(q--){
    int gc =0;
        int l, r;
        cin>>l>>r;
        for(int i = 1;i<= l-1;i++){
           gc =  __gcd(gc, a[i]);//this function computes the gcd in log(max(a,b)) complexity
        }
        for(int i = r+1;i<=n;i++){
            gc = __gcd(gc,a[i]);
        }
        cout<<gc<<endl;
    }


    
    return 0;
}


the above code will work small values but as the values will get bigger the time 
complexity will increase more than 10^7 iterations 


*/


//NOW THE OPTIMIZED CODE:
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int ar[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] = 0;
        for(int i = 1;i<=n;i++){
            cin>>ar[i];
        }
        for(int i = 1;i<= n;i++){
                        forward[i] = __gcd(forward[i-1],ar[i]);
        }
        for(int i =n ;i>=1;i--){
            backward[i] = __gcd(backward[i+1], ar[i]);
        }
        while(q--){
            int l ,r ;
            cin>>l>>r;
            cout<<__gcd(forward[l-1], backward[r+1]);
        }

    }
    
    
    return 0;
}