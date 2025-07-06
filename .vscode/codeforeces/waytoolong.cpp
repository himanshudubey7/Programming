#include<iostream>

using namespace std;
int main(){
    int n,l ,i;
    string s;
    char ch,chr;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        l = s.length();
        if(l > 10)
        {
        ch = s.at(0);
        chr  = s.at(l-1);
        cout<< ch<<(l-2)<<chr<<endl;        
        }
        else
        {
            cout<<s<<endl;
        }
        n--;
    }
    return 0;
}