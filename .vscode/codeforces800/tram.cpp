//DONE!!
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int pass_ent=0;
    int pass_ext =0;
    int pass_curr =0;
    int count =0;
    auto max =0;
    for(int i=0;i<n;i++)
    {
        pass_ext =a[i];
        pass_ent = b[i];
        pass_curr = pass_ent-pass_ext;
        count = count +pass_curr;
        if(count >max)
        {
            max =count;
        }
    }
    cout<<max<<endl;
    return 0;
}