public class App {
    public static void printStudentInfo(Student obj){
        System.out.println("Student_Id: "+obj.id);
        System.out.println("Student_Name: "+obj.name);
        System.out.println("Student_Age: "+obj.age);
        System.out.println("Student_Height: "+obj.height);
        System.out.println(obj.name+"is learn "+obj.noOfSub+" subjects.\n");
    }
    public static void main(String[] args) throws Exception {
        Student s1 = new Student(101, "Neeraj Kumar", 21, 5, 165.52f);
        printStudentInfo(s1);

        Student s2 = new Student(102, "Vikash Sharma", 20, 4, 165.3f);
        printStudentInfo(s2);

        Student s3 = s2;
        printStudentInfo(s3);
    }
}