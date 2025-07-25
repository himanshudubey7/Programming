/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example


Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is  after all operations are performed.

Function Description

Complete the function arrayManipulation in the editor below.

arrayManipulation has the following parameters:

int n - the number of elements in the array
int queries[q][3] - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.
Returns

int - the maximum value in the resultant array
Input Format

The first line contains two space-separated integers  and , the size of the array and the number of operations.
Each of the next  lines contains three space-separated integers ,  and , the left index, right index and summand.

Constraints

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200

NOTE: the basic code of the above ques is :
#include<bits/stdc++.h>

using namespace std;
    const int N = 1e7+10;
 long long int ar[N];
int main(){
    int n, m;
    cin>>n>>m;
    while(m--){
        int a,b ,k;
        cin>>a>>b>>k;
        for( int i=a; i<=b;i++){
            ar[i] = ar[i]+k;

        }
    }
    int max = -1;
    for(int i = 1;i<=n;i++){
        if (max < ar[i]){
            max = ar[i];

    }
    }
    cout<<max<<endl;

    
    return 0;
}



*/



#include<bits/stdc++.h>

using namespace std;
    const int N = 1e7+10;
    long long int ar[N];

int main(){
int n, m ;
cin>>n>>m;
while(m--) {
    int a,b,k;
    cin>>a>>b>>k;
     
    ar[a]  = ar[a]+k;
    ar[b+1] = ar[b+1]-k;
}
for(int i =1;i<=n;i++){
    ar[i] = ar[i-1] + ar[i];
}

    int max = -1;
    for(int i = 1;i<=n;i++){
        if (max < ar[i]){
            max = ar[i];

    }
    }
    cout<<max<<endl;
    return 0;
}