import java.util.*;
import java.io.*;
public class file{
    public static void main(String[] args)throws IOException {// *** must use throws IOException 


        //creating file
        File ob = new File("file.text");
        if(ob.createNewFile()){
            System.out.println("File succesfully created");
        }
        else{
            System.out.println("file already exits");
        }

        // writing in the file the information about the student
        FileWriter fw = new FileWriter(ob);
        fw.write("Name : Shreya \n Branch : I.T.\n Roll no. : 22659");
        fw.close(); // *** the file must be closed after writing 


        //reading the file using the scanner class 
        Scanner sc = new Scanner (ob);
        System.out.println("file details: \n");
        System.out.println("is file readble: "+ ob.canRead() + "\n");
        System.out.println("is file writeable: "+ ob.canWrite()+ "\n");
        System.out.println("size of the file is : "+ ob.length()+ "\n");
        System.out.println("the content of the file is : \n");
        while(sc.hasNext()){
            String str = sc.nextLine();
            System.out.println(str);
        }
        sc.close();// *** file must be closed after reading it :
    }
}