#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n ,q;
    cin>>n>>q;
    vector<vector<int >>a[n];//create vector of vectors 
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        a[i].resize(k);
        //fill the vectors with k values 
        for(int j=0 ; j<k ; j++)
        {
            cin>>a[i][j];


        }
    }
    // run queries on a 
    for (int l=0; l<q; l++)
    {
        int i;int j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    
    
    return 0;
}