#include<iostream>
#include<vector>
using namespace std;

class Student{
private:
    int age;
    string gf;
public:
    int id;
    string name;
    int std;
    int noOfSub;
    
    // constructor
    Student(int id, string name, int age, int std, int noOfSub){
        this->id = id;
        this->name = name;
        this->age = age;
        this->std = std;
        this->noOfSub = noOfSub;
        this->gf = "";
    }

};

class Node{
public:
    Student *s;
    Node* next;
    Node(int id, string name, int age, int std, int noOfSub) : next(NULL){
        s = new Student(id, name, age, std, noOfSub);
    }
    ~Node() { 
        delete next; 
        delete s;
    }
};

class StudentList{
private:
    Node* tail;
public:
    Node* head;
    int length;
    StudentList(){
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }
    bool insertStudent(int id, string name, int age, int std, int noOfSub){
        if(head == NULL){
            Node* newNode = new Node(id, name, age, std, noOfSub);
            this->head = newNode;
            this->tail = newNode;
            this->length++;
            return true;
        }
        else{
            Node* newNode = new Node(id, name, age, std, noOfSub);
            this->tail->next = newNode;
            this->tail = newNode;
            this->length++;
            return true;
        }
        return false;
    }
    bool deleteStudent(int id){
        Node* temp = this->head;
        while(temp != NULL){
            if(temp->s->id == id){
                if(temp == this->head){
                    Node* oldNode = temp;
                    this->head = temp->next;
                    temp->next = NULL;
                    delete oldNode;
                }
                else if(temp == this->tail){
                    Node* oldNode = temp;
                    Node* temp2 = this->head;
                    while(temp2->next->next){
                        temp2 = temp2->next;
                    }
                    this->tail = temp2;
                    this->tail->next = NULL;
                    delete oldNode;
                }
                else{
                    Node* oldNode = temp;
                    Node* temp2 = this->head;
                    while(temp2->next){
                        if(temp2->next->s->id == id){
                            break;
                        }
                        temp2 = temp2->next;
                    }
                    temp2->next = temp->next;
                    temp->next = NULL;
                    delete oldNode;
                }  
                this->length--; 
                return true;                 
            }
            temp = temp->next;
        }
        return false;
    }

    void studentInfo(){
        Node* temp = this->head;
        while(temp != NULL){
            cout << "---------------------------------------------" << endl;
            cout << "Student_ID: " << temp->s->id << endl;
            cout << "Sudent_name: " << temp->s->name << endl;
            cout << "Study in STD: " << temp->s->std << endl;
            cout << "No of Subjects learn: " << temp->s->noOfSub << endl;
            cout << "---------------------------------------------" << endl;
            temp = temp->next;
        }
        cout << endl;
    }
    ~StudentList(){
        delete head;
        delete tail;
    }
};

int main(){
    StudentList sl;
    int id[] = {101, 102, 103, 104};
    string name[] = {"Neeraj Prajapati", "Vijay Kumar", "Karan Saini", "Mohan Kumar"};
    int age[] = {20, 28, 27, 19};
    int std[] = {10, 8, 12, 11};
    int noOfSub[] = {5, 5, 6, 4};

    // insert 4 students
    for(int i=0; i<4; i++){
        bool isIsnsert = sl.insertStudent(id[i], name[i], age[i], std[i], noOfSub[i]);
        if(isIsnsert){
            cout << "Inserted " << i+1 << " student." << endl;
        }
        else{
            cout << "Not inserted " << i+1 << " this student" << endl;
        }
    }
    sl.studentInfo();
    cout <<"no fo students persent: " << sl.length << endl;

    // delete Student 
    int s_id = 104;
    if(sl.deleteStudent(s_id)){
        cout << "This Student_Id " << s_id << " deleted sucessfully." << endl;
    }
    else{
        cout << "Not persent this student." << endl;
    }
    sl.studentInfo();
    cout <<"no of students persent: " << sl.length << endl;

    // Access single student
    Node* temp = sl.head;
    cout << temp->next->next->s->id << endl;

    return 0;
}