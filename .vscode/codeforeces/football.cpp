#include<iostream>

using namespace std;
int main(){
    string s ;
    cin>>s;
    int l = s.length();
    int i =0;
    int counter =0;
    while(l!=0)
    {
        if(s[i] == s[i+1])
        {
            counter++;
            //cout<<counter<<endl;
        }
        else if((counter+1)>7 || (counter+1) ==7)
        {
            break;
        }
        else
        {
        counter =0;

        }
        i++;
        l--;
        
    }
    if((counter+1)>7 || (counter+1) ==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}