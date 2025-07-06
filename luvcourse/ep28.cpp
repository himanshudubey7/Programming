//monk and the magical candy bar
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++)
        {
            long long can_cnt;
            cin>>can_cnt;
            bags.insert(can_cnt);
        }
        long long total_can=0;
        while(k--)
        {
            auto it = bags.end();
            it--;
            long long temp = *it;
            total_can +=temp;
            bags.erase(it);
            bags.insert(temp/2);
        }
        cout<<total_can<<endl;
    }
    return 0;
}