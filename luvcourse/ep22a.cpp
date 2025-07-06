/*
NESTING OF VECTORES AND PAIRS
episode 22


*/
#include<bits/stdc++.h>

using namespace std;
void vecprint(vector<pair<int,int>> &v)
{
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
        cout<<endl;
    }

}
int main(){
    vector<pair<int , int>> v={{1,2},{2,3},{3,4}};
    vecprint(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    vecprint(v);

    return 0;
}