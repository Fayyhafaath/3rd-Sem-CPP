#include <iostream>
#include <cmath> 
using namespace std;
inline float areaCircle(float radius) {
    return M_PI * radius * radius;
}


inline float areaSquare(float side) {
    return side * side;
}

inline float areaRectangle(float length, float width) {
    return length * width;
}

inline float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, side, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << areaCircle(radius) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = " << areaSquare(side) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << areaRectangle(length, width) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << areaTriangle(base, height) << endl;

    return 0;
}
