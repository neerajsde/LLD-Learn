public class Student {
    public int id;
    public String name;
    public int age;
    public int noOfSub;
    public float height;

    // constructor
    public Student(int id, String name, int age, int noOfSub, float height){
        this.id = id;
        this.name = name;
        this.age = age;
        this.noOfSub = noOfSub;
        this.height = height;
    }

    public Student(Student srcObj){
        this.id = srcObj.id;
        this.name = srcObj.name;
        this.age = srcObj.age;
        this.noOfSub = srcObj.noOfSub;
        this.height = srcObj.height;
    }

    // Student behavior
    public void study(){
        System.out.println(this.name + " is studying..");
    }

    public void sleep(){
        System.out.println(this.name + " is sleeping..");
    }
}
