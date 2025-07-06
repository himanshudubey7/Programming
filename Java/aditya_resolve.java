import java.io.*;
import java.util.*;
public class aditya_resolve  {
    public static void main(String[] args) throws IOException {
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
       
            int n=scan.nextInt();
            int count=0;
            int tilecount=0;
            char[][] ch=new char[n][n];
            for (int i = 0; i <n; i++) {
                String str=scan.next();
                for (int j = 0; j <n ; j++) {
                    ch[i][j]=str.charAt(j);
                    if (ch[i][j]=='.'){
                        count++;
                    }
                }
            }
            for (int i = 1; i <n-1; i++) {
                for (int j = 1; j <n-1 ; j++) {
                    if (ch[i][j]=='.'){
                        if (ch[i-1][j]=='.' && ch[i+1][j]=='.' && ch[i][j+1]=='.' && ch[i][j-1]=='.' ){
                            tilecount++;
                        }
                    }
                }
            }
            if (tilecount==(count/5) && count%5==0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        
    }
}