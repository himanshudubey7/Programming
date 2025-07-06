package oops;
class Base{
    int x;
    public int getX(){
        return x;
    }
    public void setX(int x){
        this.x = x;
    }
    public void printme(){
        System.out.println("hello i am a base class");
    }
    public int sum(int a, int b){
        return a+b;
    }
}

class derived extends Base{
    int y;
    public int getY(){
        return y;
    }
    public void setY(){
        this.y = y;
    }

    int a = 10 ;
    int b= 40;
    int ans = sum(a, b);
    // System.out.println(ans);

}

public class inherit {
    public static void main(String[] args) {
        Base b= new Base();
        b.setX(4);
        System.out.println(b.getX());
        derived d =new derived();
        System.err.println(d.ans);
        System.err.println(d.sum(10, 20));
        
        
    }
}
