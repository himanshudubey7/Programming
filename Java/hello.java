import java.util.*;
public class hello{
    static int sum(int a, int b){
        return a+b;
    }


     int add(int a, int b){// without static keyword 
        return a+b;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("hello world");
        int a= sc.nextInt();
        int b = sc.nextInt();
        System.out.println("the sum of both numbers == " + sum(a,b));
        
        /*
        * Calling a method:
        * A method can be called by ceating an object of the class in which the method exists
        *  followed by the method call.
        * 
        * Calc obj = new Calc ();
        * obj.mysym(a,b);
        */

        hello obj = new hello();
        System.out.println("the sum of both numbers == " + obj.add(a,b));
    }
}