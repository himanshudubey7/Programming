import java.io.*;
import java.util.*;

public class f1{
    public static void main(String[] args) throws IOException {
        File ob = new File("tech2.txt");
        //Creating a file 
        if(ob.createNewFile()){
            System.out.println("File created");
            
        }
        else{
            System.out.println("File already exists");
        }
        
        // System.out.println(ob.getAbsolutePath());

        //reading a file
        Scanner sc =new Scanner(ob);
        while(sc.hasNextLine()){
            String data = sc.nextLine();
            System.out.println(data);
        }
        // sc.close();


        //writing a file 
        FileWriter fw = new FileWriter(ob);
        fw.write(" and i am in I.T. branch!!");
        fw.close();


        //again reading the file
        System.out.println("successfully written");
        while(sc.hasNext()){
            String p = sc.nextLine();
            System.out.println(p);
        }
        sc.close();
    }
}