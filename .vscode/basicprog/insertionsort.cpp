#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp ;
    int j;
    for(int i =1;i<n;i++)
    {
        temp = a[i];
        for(  j = i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1] = a[j];
            }
            else
            break;

        }
        a[j+1] = temp;
    }
    for(int i = 0 ;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;


    return 0;
}