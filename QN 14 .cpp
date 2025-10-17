#include <iostream>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
    string Course;
public:
    void setStudentData(string n, int r, string c) {
        Name = n;
        Rollno = r;
        Course = c;
    }

    void displayStudentData() {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks1, marks2, marks3;
public:
    void setMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    int getTotalMarks() {
        return marks1 + marks2 + marks3;
    }
};
class GraceMarks : virtual public Student {
protected:
    int BonusMark;
public:
    void setBonusMark(int b) {
        BonusMark = b;
    }

    int getBonusMark() {
        return BonusMark;
    }
};


class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        displayStudentData(); 
        cout << "Marks in 3 subjects: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Bonus Marks: " << BonusMark << endl;
        cout << "Total Marks (with bonus): " << getTotalMarks() + getBonusMark() << endl;
    }
};

int main() {
    Result r1;


    r1.setStudentData("Vismaya", 101, "CSE");
    r1.setMarks(85, 90, 95)
    r1.setBonusMark(5);

    
    cout << "------ Student Result ------\n";
    r1.displayResult();

    return 0;
}
