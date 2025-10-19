#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

  
    void display() {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }
    
    friend Time addTime(Time t1, Time t2);
};


