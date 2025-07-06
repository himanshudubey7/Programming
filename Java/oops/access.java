// // to demonstrate encapsulation example

// public class access{

//     private String name;
//     private int age;
//     public String getName(){return name;}
//     public void setName(String name){this.name = name;}
//     public int getAge(){return age;}
//     public void setAge(int age){
//         this.age  = age;
//     }
//     public static void main(String[] args) {
//         access ob = new access();
//         ob.setName("shreya");
//         System.out.println(ob.getName());
//         ob.setAge(21);
//         System.out.println(ob.getAge());
        
//     }
// }


// you can also initilize values in the constructor
public class access{

    private String name;
    private int age;
    // public String getName(){return name;}
    // public void setName(String name){this.name = name;}
    // public int getAge(){return age;}
    // public void setAge(int age){
    //     this.age  = age;
    access(String name , int age){
        this.name = name;
        this.age = age;

    }
    public void getName(){
        System.out.println("hello my name is "+ name +" and i am "+age+" years old.");
    }
    
    public static void main(String[] args) {
        access ob = new access("shreya", 21);
        // ob.setName("shreya");
        ob.getName();
        // ob.setAge(21);
        // System.out.println(ob.getAge());
        
    }
}