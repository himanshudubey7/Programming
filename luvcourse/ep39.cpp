//SUBSET GENERATION USING RECURSION AND BACKTRACKING
#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> v;

void generate (vector<int> &subset, int i, vector<int> &num)
{
    if(i == num.size())
    {
    v.push_back(subset);
    return ;

    }
    
    generate(subset, i+1,num);// ith element not in subset
     
     subset.push_back(num[i]);// ith element in subset
     generate(subset, i+1, num);
     subset.pop_back();

}
int main(){
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    vector<int> empty;

    generate(empty,0,num);

    
    for(auto subset: v){
        for(auto ele : subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}