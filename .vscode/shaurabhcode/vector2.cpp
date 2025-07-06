/*
FOR MORE INFO REFER NOTION NOTES
IN THIS CODE WE WILL LEARN TO USE MEMBER FUNCTION OF VECTOR CLASS
1.push_back()
2.pop_back()
3.capacity()
4.size()
5.clear()
6.at()
7.front() and back()


*/


#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v1;  //it's capacity is zero now
    cout<<"the initial capacity ="<<v1.capacity()<<endl;
    for(int i = 0 ; i<10;i++)
    {
        v1.push_back(10*(i+1));

    }
    cout<<" capacity after the push back = "<<v1.capacity()<<endl;

   // v1.pop_back();
    //cout<<"capacity after pop ="<<v1.capacity()<<endl;
    //cout<<"total number of elements = "<<v1.size()<<endl;

    for(int i=0 ;i<v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }
    //v1.clear();
    //cout<<"size = "<<v1.size()<<endl;
    
    //cout<<"capacity ="<<v1.capacity()<<endl;
    cout<<"first value is "<<v1.front()<<endl;
    cout<<" last value is "<<v1.back()<<endl;
    
    return 0;
}