#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int x = 0;
    while(n!=0)
    {
        cin>>s;
        if(s == "++X")
        {
            ++x;
        }
        else if (s == "X++")
        {
            x++;
        }
        else if (s =="--X")
        {
            --x;
        }
        else if( s == "X--")
        {
            x--;
        }
        



        n--;

    }

    cout<<x<<endl;
    

    

    return 0;
}