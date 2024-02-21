public class App {
    public static void printStudentInfo(Student Obj){
        System.out.println("Student_ID: "+Obj.id);
        System.out.println("Student_NAME: "+Obj.name);
        System.out.println(Obj.name+" is learn "+Obj.noOfSub+" Subjects.");
    }
    public static void main(String[] args) throws Exception {
        Student s1 = new Student(101, "Rohit Kumar", 18, 5, "Nisha Baby");
        printStudentInfo(s1);
        System.out.println(s1.name+" your age is "+s1.getAge(101));
        System.out.println(s1.name+" your gf name is "+s1.getGfName(101));
        // update age
        if(s1.setAge(101, 20)){
            System.out.println(s1.name+" now your age updated..");
        }
        else{
            System.out.println("!sorry "+s1.name+" your age not updated");
        }

        s1.isGFChating(101);
        // update gf name
        if(s1.setGfName(878, "Komal")){
            System.out.println(s1.name+" now your gf name updated...");
        }
        else{
            System.out.println("!sorry "+s1.name+" your gf name not updated");
        }

    }
}
