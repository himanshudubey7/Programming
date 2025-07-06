//USE OF INBUILT SORT FUNCTION -->INTRO SORT:: 
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());//adress to : from where to start sorting and
                    //address to : till where we want to sort + 1;
                    //complexity: nlog(n)
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}