import java.util.*;
public class queue1{
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        // offer function ;
        q.offer(1);
        q.offer(2);
        q.offer(3);
        q.offer(4);
        q.offer(5);
        q.offer(6);
        System.out.println(q.size());
        
    for(int i= 0;i<q.size();i++){
        System.out.println(q.peek());
       System.out.println(q.poll());
    }

    }
}