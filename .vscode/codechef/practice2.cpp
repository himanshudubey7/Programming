#include<iostream>

using namespace std;
int main(){
    int n;
    int N, M, K;

    //N ---> resembles the no. of friends
    //M ----> no. of places in the course
    //K ---> no. of students already registerd

    cout<<" number of test cases "<<endl;
    cin>>n;
    while(n!=0)
{
    cout<<" enter no. of friends , total seats and students already registerd "<<endl;
    cin>>N>>M>>K;
    if( (M-K) >= N)
    {
        cout<<" Yes "<<endl;
    }
    else
    cout<<" No"<<endl;
    n--;


}

    return 0;
}