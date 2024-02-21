public class Student{
    public int id;
    public String name;
    private int age;
    public int noOfSub;
    private String gf;

    // constructor
    public Student(int id, String name, int age, int noOfSub, String gf){
        this.id = id;
        this.name = name;
        this.age = age;
        this.noOfSub = noOfSub;
        this.gf = gf;
    }
    // constructor polymorphism
    public Student(int id, String name, int age, int noOfSub){
        this.id = id;
        this.name = name;
        this.age = age;
        this.noOfSub = noOfSub;
    }
    // copy constructor
    public Student(Student srcObj){
        this.id = srcObj.id;
        this.name = srcObj.name;
        this.age = srcObj.age;
        this.noOfSub = srcObj.noOfSub;
        this.gf = srcObj.gf;
    }


    public int getAge(int id){
        if(this.id == id){
            return this.age;
        }
        return -1;
    }

    public boolean setAge(int id, int age){
        if(this.id == id && age < 100){
            this.age = age;
            return true;
        }
        return false;
    }

    private void gfChat(){
        System.out.println("Hello "+this.name+" this time you are chating with your gf..");
    }
    public void isGFChating(int id){
        if(id == this.id){
            this.gfChat();
        }
        else{
            System.out.println("I will not share my personal details with you.");
        }
    }
    public String getGfName(int id){
        if(this.id == id){
            return this.gf;
        }
        return "";
    }
    public boolean setGfName(int id, String gf){
        if(this.id == id && (gf.length() > 1 && gf.length() < 30)){
            this.gf = gf;
            return true;
        }
        return false;
    }
}