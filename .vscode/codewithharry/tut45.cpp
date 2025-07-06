/* PROGRAM TO DEMOSTRATE VIRTUAL BASE CLASS */

#include<iostream>

using namespace std;

class Student {
    protected : 
    int roll_no;  //will be inherited by both class test and class sports 


    public :
    void set_number(int a )
    {
        roll_no= a;

    }

    void print_number(void)
    {
        cout<<" Your roll number is --->"<<roll_no<<endl;

    }

};

class Test : virtual public Student 
{
    protected:
    float maths , physics ;

    public :
    void set_marks (float m1 , float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks (void )
    {
        cout<<" your result is here :"<<endl
            << " Maths ---> "<<maths<< endl
            <<" Physics ----> "<<physics<<endl;
    }

};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }

    void print_score(void)
    {
        cout<<" Your PT score is --->"<<score<<endl;
    }



};

class Result : public Test , public Sports
{
    private:
    float total ;
    public : 
    void display (void)
    {
        total = (maths + physics + score);

        print_number();
        print_marks();
        print_score();

        cout<<" Your total score is :"<<total<<endl;

    }

};
int main(){


    Result r;
int l ;


    cout<<" enter your roll no. "<<endl;
cin >>l;

    r.set_number(l);
    
    r.set_marks(98 , 89);

    r.set_score(18);


    r.display();
    
    return 0;
}