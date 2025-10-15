#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model; 
    int year;

public:
    void readData() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void displayData() {
        cout << "\nCar Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
  
    Car car1, car2, car3;

    cout << "Enter details for Car 1:" << endl;
    car1.readData();

    cout << "\nEnter details for Car 2:" << endl;
    car2.readData();

    cout << "\nEnter details for Car 3:" << endl;
    car3.readData();

    
    cout << "\n=== Displaying Car Details ===" << endl;
    car1.displayData();
    car2.displayData();
    car3.displayData();

    return 0;
}
