class Employee_2{
    int id ;
    String name;
    int salary = 100;
    //Constructor is automatically envoked as soon as we create the object of the class
    public Employee_2(String n){
        id = 00;
        name = n;
    }
    public void printdetails(){
        System.out.println("My id is   = "+id);
        System.out.println("My name is   = "+name);
    }
    public int getsalary(){
        return salary;
    }
 }


public class constructors {
    public static void main(String[] args) {
        Employee_2 arjun =new Employee_2("Arjun");
       arjun.printdetails();
        
    }
}
