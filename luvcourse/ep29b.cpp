/*


PROBLEM:


Monk is a multi-talented person and prepares result for his college in this free time.
(Yes ,he is still in love with his old college!). He gets a alist of students with their 
marks. The maximum makrks which can be obtained in the exam is 100.


The monk is suposed to arrange the list in such a manner that the list is sorted in
decresing order of marks .
And if two students have the same marks, they should be arranged in texicogreaphical manner.
Help Monk prepare the same!


INPUT FORMAT:

ON the first line of the standard input , there is an integer N , denoting the number
of students . N lines follow which contain a string and an integer . denoting the name 
of the sudent and his marks 


OUTPUT FORMAT:


YOu must print the required list.


CONSTRAINTS:

 1<=N<=10^6

*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    map<int , multiset<string>> marks_map;//we will have to use multiset insted of set
                        //because let's suppose in our class we have two alice with 
                        //same marks i.e 78 then 'set' will combine those two in one 
                        //as set stores unique values and hence we will have to use 
                        // multiset.
    for(int i=0;i<n;i++)
    {
        int marks ;
        string name;
        cin>>name>>marks; // enter name of student and their coreespondig marks 
        marks_map[marks].insert(name);
    }
    auto it = --marks_map.end(); //itreator pointing at the last element
    while(true)
    {
        auto &students_name = (*it).second;//auto students is a set 
        auto marks  = (*it).first;// auto marks points to int marks
        for(auto &student : students_name )
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(it == marks_map.begin())
        {
            break;
        }
        else
        {
            --it;
        }
    }


    
    return 0;
}


//WE CAN DO THE SAME CODE AS TOO ALSO


/*#include<bits/stdc++.h>

using namespace std;
int main(){
       int n;
    cin>>n;
    map<int , multiset<string>> marks_map;
    for(int i=0;i<n;i++)
    {
        int marks ;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);//change 
    }
   
      for(auto marks_student_pr : marks_map)
      {
        auto &students = marks_student_pr.second;
        auto marks = marks_student_pr.first;
        for(auto &student: students)
        {
        cout<<student<<" "<<(-1*marks)<<endl;
        }

      }
   
    return 0;
}
*/