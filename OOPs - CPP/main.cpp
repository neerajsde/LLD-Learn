#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    int noOfSub;
private:
    int age;
    string gf;

public:
    // constructor
    Student(int id, const string& name, int age, int noOfSub, const string& gf)
        : id(id), name(name), age(age), noOfSub(noOfSub), gf(gf) {}

    // constructor polymorphism
    Student(int id, const string& name, int age, int noOfSub)
        : id(id), name(name), age(age), noOfSub(noOfSub) {}

    // copy constructor
    Student(const Student& srcObj)
        : id(srcObj.id), name(srcObj.name), age(srcObj.age), noOfSub(srcObj.noOfSub), gf(srcObj.gf) {}

    int getAge(int id) {
        if (this->id == id) {
            return age;
        }
        return -1;
    }

    bool setAge(int id, int newAge) {
        if (this->id == id && newAge < 100) {
            age = newAge;
            return true;
        }
        return false;
    }

    void isGFChating(int id) {
        if (id == this->id) {
            gfChat();
        }
        else {
            cout << "I will not share my personal details with you." << endl;
        }
    }

    string getGfName(int id) {
        if (this->id == id) {
            return gf;
        }
        return "";
    }

    bool setGfName(int id, const string& newGf) {
        if (this->id == id && (newGf.length() > 1 && newGf.length() < 30)) {
            gf = newGf;
            return true;
        }
        return false;
    }

private:
    void gfChat() {
        cout << "Hello " << name << " this time you are chatting with your gf.." << endl;
    }
};

void printStudentInfo(const Student& obj) {
    cout << "Student_ID: " << obj.id << endl;
    cout << "Student_NAME: " << obj.name << endl;
    cout << obj.name << " is learning " << obj.noOfSub << " Subjects." << endl;
}

int main() {
    Student s1(101, "Rohit Kumar", 18, 5, "Nisha Baby");
    printStudentInfo(s1);
    cout << s1.name << " your age is " << s1.getAge(101) << endl;
    cout << s1.name << " your gf name is " << s1.getGfName(101) << endl;

    // update age
    if (s1.setAge(101, 20)) {
        cout << s1.name << " now your age is updated.." << endl;
    }
    else {
        cout << "!sorry " << s1.name << " your age is not updated" << endl;
    }

    s1.isGFChating(101);

    // update gf name
    if (s1.setGfName(878, "Komal")) {
        cout << s1.name << " now your gf name is updated..." << endl;
    }
    else {
        cout << "!sorry " << s1.name << " your gf name is not updated" << endl;
    }

    return 0;
}
