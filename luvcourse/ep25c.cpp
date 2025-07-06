/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

 1:Add the marks y to the student whose name is x.

2: Erase the marks of the students whose name is x.

3: Print the marks of the students whose name is x. 
(If  didn't get any marks print 0.)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.

Constraints





Output Format:

For queries of type  print the marks of the given student.



Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess


Sample Output

30
20
0

*/


#include<bits/stdc++.h>

using namespace std;
int main(){
    map<string,int> m;
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(n == 1)
        {
            string x;
            cin>>x;
            int y;
            cin>>y;
            m[x] = m[x]+y;
            
        }
        if(n==2)
        {
            string x;
            cin>>x;
            m[x] = 0;
        }
        if(n ==3)
        {
            string x;
            cin>>x;
            cout<<m[x]<<endl;

        }
    }
    return 0;
}