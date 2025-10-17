#include <iostream>
#include <string>
using namespace std;

class Telephone {
private:
    string name;
    string address;
    long long tel_no;
    int num_calls;

public:
  
    void input() {
        cout << "Enter Customer Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Telephone Number: ";
        cin >> tel_no;
        cout << "Enter Number of Calls: ";
        cin >> num_calls;
    }


    void display() {
        cout << "\nCustomer Name: " << name;
        cout << "\nAddress: " << address;
        cout << "\nTelephone Number: " << tel_no;
        cout << "\nNumber of Calls: " << num_calls;
    }


    friend void calculateBill(Telephone t);
};


void calculateBill(Telephone t) {
    float charge_per_call = 2.0;
    float total_amount = t.num_calls * charge_per_call;

    cout << "\nTotal Amount to be Paid: Rs. " << total_amount << endl;
}

int main() {
    Telephone cust;

    cout << "=== Enter Telephone Bill Details ===" << endl;
    cust.input();

    cout << "\n Customer Bill Details ";
    cust.display();

    calculateBill(cust);

    return 0;
}
