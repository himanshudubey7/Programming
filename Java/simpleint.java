import java.util.*;
public class simpleint{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ch;
        System.out.println("enter 1 for simple interest \n 2 for compound interest\n");
        ch= sc.nextInt();
        double p,t,r;
        double si;
        System.out.println("enter principle \n enter time \n enter rate");
        p = sc.nextDouble();
        t = sc.nextDouble();
        r = sc.nextDouble();
        double amt ;
        double ci ;
        switch (ch) {
            case 1:
           
            si = (p*r*t)/100;
            System.out.println(si);
                break;

            case 2: 
            amt =  p * ((Math.pow((1 + r / 100),t))); 
              ci = amt -p;
              System.out.println(ci);
            
            break;

        
            default:
            System.out.println("invalid choice");
                break;
        }
    }
}