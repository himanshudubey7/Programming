import java.util.*;
public class stack1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack <Integer> st = new Stack<>();
        st.push(10);
        st.push(20);
        st.push(30);
        Iterator<Integer> it = st.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
        int p = st.size();
        System.out.println(st.size());
        while(p!=0){
            System.out.println(st.peek());
            st.pop();
            p--;
        }
    }
}