/*
this code will demonstrate you , how to create array of vectors 
it is kind of 2d array 
in which no. of coloumns is fixed i.e the size of the array
but the no . of each row is not fixed i.e size of vector is dynamic
episode 22
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
    cout<<"enter the no. of vector you want to create"<<endl;
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"enter the size of vector"<<endl;
        cin>>n;
        cout<<"enter the elements of vectors"<<endl;
        for(int j =0;j<n;j++)
        {
            int x;
            
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        vecprint(v[i]);
    }
    
    return 0;
}