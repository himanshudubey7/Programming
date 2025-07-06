/*

*/
#include<bits/stdc++.h>

using namespace std;
void vecprint(vector<int> &v)
{
    cout<<"the size of vector is "<<v.size()<<endl;
    cout<<"your vector is "<<endl;
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
       
    }

}
int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int >temp;
        for(int j=0;j<n;j++)
        {
            int x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        vecprint(v[i]);
    }
    
    return 0;
}