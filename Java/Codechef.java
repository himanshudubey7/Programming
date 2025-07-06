import java.util.*;


class Codechef
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int T = sc.nextInt();
	    for(int t=0;t<T;t++ ){
	        int n;
	     n= sc.nextInt();
        String str = sc.nextLine();
        int count =0;
        for(int i=0;i<n;i++){
               if(count >= 4){
                break;
            }
            char ch = str.charAt(i);
            
            // System.out.println(t+" "+count);
            if (ch =='a' || ch == 'e'||ch =='i' || ch == 'o'||ch =='u'){
                count =0;
            }else{
                count++;
            }
         
        }
        
        if (count >= 4){
            System.out.println("NO");
        }else{
             System.out.println("YES");
        }
	    }
	}
}