#include <iostream>
#include <cmath> 
using namespace std;
float area(float radius) {
    return M_PI * radius * radius;
}

float area(int side) {
    return side * side;
}

float area(float length, float width) {
    return length * width;
}

float area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, width;
    int side;
    double base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = " << area(side) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << area(length, width) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height) << endl;

    return 0;
}
