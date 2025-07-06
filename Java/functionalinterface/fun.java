//to demonstrate user defined functional interfaces and lambda expressioions

interface Func{
    void absfun(int x);//abstract method

//normal method
    default void normalfun(){
        System.out.println("helloo");
    }

}

// to remove this middle class we have used lambda expressions
// class test implements Func{
//     public void absfun(int x){
//         System.out.println(2*x);
//     }
// }

class fun {
    public static void main(String[] args) {
        Func obj = (int x) -> System.out.println(2*x);
Func ob = (int y) -> System.out.println(y+y);
        // test ob =  new test();
        // ob.absfun(5);

        //this calls above lambda expression and prints 10;
        obj.absfun(5);
        ob.absfun(10);
    }
}