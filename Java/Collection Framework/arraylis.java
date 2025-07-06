import java.util.ArrayList;
import java.util.*;
public class arraylis{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> name = new ArrayList<>();
        name.add(1);
        name.add(2);
        name.add(3);
        name.add(4);
        Collections.addAll(name,5,6,7,8,9,10);
       
        for(int i= 0;i<name.size();i++){
            System.out.println(name.get(i));
        }

        name.remove(0);
        // name.remove(Interger.valueOf(10));
        name.set(0,2);
        for(int i= 0;i<name.size();i++){
            System.out.println(name.get(i));
        }

    }
}