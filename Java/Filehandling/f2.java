import java.util.*;
import java.io.*;
public class f2{
    public static void main(String[] args)throws IOException {// *** must use throws IOException 
        //creating file
        File ob = new File("file.text");
        File obj =new File("file1.txt");
        if(ob.createNewFile()){
            System.out.println("File succesfully created");
        }
        else{
            System.out.println("file already exits");
        }
        if(obj.createNewFile()){
            System.out.println("File succesfully created");
        }
        else{
            System.out.println("file already exits");
        }
        FileWriter f = new FileWriter(ob);
        f.write("hello my name is shreya");
        f.close();
        //reading the file using the scanner class 
        FileWriter fw  = new FileWriter(obj);
        Scanner sc = new Scanner (ob);
        while(sc.hasNext()){
         String   str = sc.nextLine();
         fw.write(str);
        }
        sc.close();
        fw.close();
System.out.println("the file copying is successful");
Scanner o = new Scanner (obj);
while(o.hasNext()){
    String p = o.nextLine();
    System.out.println(p);
}
o.close();
    }
}