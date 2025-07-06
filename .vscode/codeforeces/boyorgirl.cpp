#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string username;
    int count = 0;
    cin >> username;
    sort(username.begin(),username.end()); //for understanding purpose, i do it
    int slen = username.length();
    //cout << username << endl;
    for(int i = 0; i < slen; i++)
    {
            if(username[i] != username[i-1])
            {
                count++;
            }
    }
    if(count %2 ==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    cout<<"IGNORE HIM!"<<endl;
    //cout << "Total number of distinct characters  :  " << count << endl;
    return 0;
}