#include <iostream>
using namespace std;

class Counter {
    int count;  
public:
    Counter() {
        count = 0;
    }
    Counter(int c) {
        count = c;
    }

  
    Counter operator++() {
        ++count;  
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        count++;  
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Before increment: ";
    c1.display();

    ++c1;  
    cout << "After prefix increment: ";
    c1.display();

    c1++; 
    cout << "After postfix increment: ";
    c1.display();

    return 0;
}
