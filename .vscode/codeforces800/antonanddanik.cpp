//DONE
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A=0;
    int D=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            A++;
        }
        else if(s[i]== 'D')
        {
            D++;
        }
    }
    if(A==D)
    {
        cout<<"Friendship";
    }
    else if(A>D)
    {
        cout<<"Anton";
    }
    else if(D>A)
    {
        cout<<"Danik";
    }
    return 0;
}