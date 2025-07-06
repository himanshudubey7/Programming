class A{
    public void show(){
        System.out.println("in A show");
    }
}

// class B extends A{
//     public void show(){
//         System.out.println("in B show");
//     }
// }


public class demo{
    public static void main(String[] args) {
        A ob = new A();
        ob.show();
        // System.out.println(ob.show());
        A obj = new B()
        {
            public void show(){
                System.out.println("in a B show");
            }
        };
        A shreya = new B()
        {
            public void show(){
                System.out.println("hwllo my name is shreya");
            }
        };
        obj.show();
        shreya.show();
        // System.out.println(obj.show());
    }
}