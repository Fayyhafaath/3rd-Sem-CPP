#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }
};
class Student : public Person {
    int roll_number;

public:
    void setStudentData(string n, int a, int r) {
        setPersonData(n, a); 
        roll_number = r;
    }

    void showDetails() {
        display(); 
        cout << "Roll Number: " << roll_number << endl;
    }
};


int main() {
    Student s1;

    
    s1.setStudentData("Vismaya", 20, 101);

  
    cout << "Student Details:\n";
    s1.showDetails();

    return 0;
}
