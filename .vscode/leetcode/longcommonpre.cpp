#include<iostream>
#include<string>

using namespace std;


int main(){
    int n;
    string str;

    cout<<" enter size of array "<<endl;
    cin>>n;
    string s[n];
                                                                           //string p[n];
    cout<<"enter elements of array "<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>s[i];
                                                                          //p[i] = s[i];
    }

    cout<<"your array is "<<endl;
    for(int i = 0 ; i<n; i++)
    {
                                                                          //cout<<"In Loop"<<" ";
        cout<<s[i]<<" "; 
    }
                                                                          //cout<<"Passed TO new "<<" ";

    for(int k = 0 ; k<1; k++)
    {
                                                                          //cout<<"Reached"<<" ";

        string a =s[k];
        string b = s[k+1];
        for ( int j = 0; j < max(sizeof(a) , sizeof(b)); j++)
        {
            if(a.at(j)==b.at(j))
            {
                str =  str + a.at(j);
            }
            else if (a.at(j)!= b.at(j))
            break;

    
        }
    }
    cout<<" the common part in element one and two is "<<str;

    
    
    return 0;
}