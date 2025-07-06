 class Employee{
    int id ;
    String name;
    int salary = 100;
    public void printdetails(){
        System.out.println("My id is   = "+id);
        System.out.println("My name is   = "+name);
    }
    public int getsalary(){
        return salary;
    }
 }

public class custom {
    public static void main(String[] args) {
        System.out.println("this is our custom class");
        Employee himanshu = new Employee();
        Employee john= new Employee();
        //setting properties(Attributes)
        himanshu.id = 12;
        himanshu.name = "Himanshu";
        himanshu.salary = 12000;

        john.id = 13;
        john.name = "john tripathi";
        john.salary = 1200;
       himanshu.printdetails();
       john.printdetails();
       System.out.println(himanshu.getsalary());
       System.out.println(john.getsalary());
       
        
    }
}
