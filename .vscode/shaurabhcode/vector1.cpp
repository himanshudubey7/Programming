/*
IN THIS CODE WE WILL LEARN TO CREATE A VECTOR CLASS AND ITS OBJECT

SYNTAX:
vector<data_type> object name;

THERE ARE OTHER WAYS IN WHICH YOU CAN DECLARE THE VECTOR CLASS:
1. vector <int> v1;  -----> Zero length vector
2. vector<char> cv(5); -----> creates a 5 element char vector
3. vector<char> cv(4, 'a'); ----->Initilizes 4 elements char vector with 'a'

*/


#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> v1  {10, 20, 30};  //declaration and initilization at the same time and at this time
                                          // the initial capactiy value will be 3
    vector<char> v2(4);         //creates a char vector of capacity 4 .
    vector<int> v3 (5,10) ; // creates a integer vector of capacity 5 and value 10 will be stored in all
                                    // the places
    vector<string>v4(3, "himanshu");  
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    


    return 0;
}