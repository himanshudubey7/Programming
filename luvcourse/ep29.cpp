#include<bits/stdc++.h>

using namespace std;
int main(){
    map<pair<string,string> , vector<int>> m ;//NESTING OF MAP-PAIR-VECTOR
    int n;
    cin>>n;
    while(n--)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr: m)
    {
        auto &full_name = pr.first;//first elmt of map i.e key here full_name is a pair 
        auto &list = pr.second;//second element of map i.e value here list is a vector
        cout<<full_name.first<<" "<<full_name.second<<endl;
        //full_name.first access the first elemt of pair and so on.
        cout<<list.size()<<endl;
        for(auto &element: list)
        {
            cout<<element<<" ";
        }
        cout<<endl;

        
    }
    
    return 0;
}


//nesting of maps and pairs as keys are very common in questions
