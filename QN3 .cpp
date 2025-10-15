#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }


    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    ~Rectangle() {
        cout << "Destructor called for Rectangle object." << endl;
    }
};

int main() {
    cout << "Creating rectangle1 using default constructor...\n";
    Rectangle rectangle1;   // calls default constructor
    rectangle1.display();

    cout << "\nCreating rectangle2 using parameterized constructor...\n";
    Rectangle rectangle2(10.5, 5.5);  // calls parameterized constructor
    rectangle2.display();

    cout << "\nProgram ending... destructors will be called automatically." << endl;

    return 0;
}
