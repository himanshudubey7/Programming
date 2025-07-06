/*
IN THIS CODE WE WILL LEARN ABOUT THE MAP CLASS

SYNTAX :

  NOTE: INCLUDE :

    #include<map> header file;


*/

     #include<iostream>
     #include<map>

     using namespace std;
     int main(){
    map<int , string > customer;
    customer[100] = "Gajendra";
    customer[145] = " Dilip";
    customer[200] = " Arjun";

    //another method to create object of map class
    map<int , string> c {{100 ," Gajni"},{145 , " dilip"},{200 , " arjun"} };
    
     cout<<customer[100]<<endl;
     //cout<<customer[101]<<endl;
    cout<<customer[145]<<endl;
    cout<<customer[200]<<endl;
      //Print using itreator 

 customer.insert(pair<int , string>(205 , "himanshu"));
map<int , string>:: iterator p = customer.begin();
 while(p!= customer.end())
 {
    cout<<p->second<<endl;
    p++;
 }

 cout<<customer.size()<<endl;
 cout<<customer.empty()<<endl;

    return 0;
}