class Animal{
    public void animalSound(){
        System.out.println("the animal makes a sound");
    }
}

class Pig extends Animal{
    public void animalSound(){
        System.out.println("the pig says : wee wee");
    }
}

class Dog extends Animal {
    public void animalSound(){
        System.out.println("the dog says : bow bow");
    }
}


public class poly{
    public static void main(String[] args) {
        Animal ob1 = new Animal();
        Animal mypig = new Pig();
        Animal mydog =new Dog();
ob1.animalSound();
mypig.animalSound();
mydog.animalSound();
        
    }
}