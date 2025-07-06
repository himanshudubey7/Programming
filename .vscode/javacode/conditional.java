import java.io.IOException;
import java.util.*;
public class conditional
{
	public static void main(String[] args)throws IOException
	 {
	    Scanner sc = new Scanner(System.in);
	    System.out.println("enter month number");
	    int month = sc.nextInt();
	    switch(month)
	    {
	        case 1:
	            System.out.println("January");
	            break;
	       case 2:
	           System.out.println("Febuary");
	           break;
	           case 3:
	               System.out.println("March");
	               break;
	               case 4:
	                   System.out.println("April");
	                   break;
	                   case 5:
	                       System.out.println("May");
	                       break;
	                       case 6:
	                           System.out.println("June");
	                           break;
	                           case 7: 
	                               System.out.println("July");
	                               break;
	                               default:
	                               System.out.println(" invalid input");
	                               
	               
	    }
	}
	
}
