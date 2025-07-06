/*
IN THIS CODE WE WILL LEARN ABOUT HOW TO USE ITRETOR IN VECTOR CLASS AND HOW TO INSERT VALUES 
 IN BETWEEN A VECTOR 
*/



#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v ;
    cout<<"the initial capacity = "<<v.capacity()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(10*(i+1));
        
    }
    vector <int> :: iterator it = v.begin();  //ITRETOR 'IT' IS POINTING TO THE FIRST ELEMENT
    v.insert(it+2 , 35);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    
    
    return 0;
}