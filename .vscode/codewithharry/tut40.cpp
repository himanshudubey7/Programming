/*THIS PROGRAM ILLUSTRATES THE MULTILEVEL INHERITENCE 
for example :
grandfather ------> father -------> child


*/

#include<iostream>

using namespace std;
class student {
    protected: 
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r )
{
    roll_number = r;

}

void student :: get_roll_number(void)
{
    cout<<" the roll number is "<<roll_number<<endl;

}

class exam : public student 
{

protected :
float maths ;
float physics;
public:
void set_marks (float , float);
void get_marks (void);

};

void exam :: set_marks(float m , float p)
{
    maths = m;
    physics = p;
}

void exam :: get_marks(void )
{
    cout<<" the marks obtained in physics are : "<< physics<<endl;
    cout<<" the marks obtained in maths are :"<< maths <<endl;
}


class result: public exam{

    float percentage ;
    public:
    void display_result ();

};

void result :: display_result (void)
{

    get_roll_number();
    get_marks();
    cout<<" your percentage is "<<(maths + physics)/2<<endl;

}

int main(){
/*  NOTES:
 If we are inheriting B from A and C from B [ A---> B ----> C]
1. A is the base class for B and B is the base class for C 
2. A--->B---->C is called Inheritence Path
*/

result himanshu ;
himanshu.set_roll_number(420);
himanshu.set_marks(94 , 90);
himanshu.display_result();
return 0;


}