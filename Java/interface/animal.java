interface Ani{
    public void animalsound();
    public void sleep();
}

class Pig implements Ani{
    public void animalsound(){
        // the body of animal
        System.out.println("The pig says : wee wee");
    }


public void sleep(){
    System.out.println("zzzz");
}

}

class animal{
    public static void main(String[] args) {
        Pig myPig =new Pig();
        myPig.animalsound();
        myPig.sleep();
    }
}
