#include <iostream> 
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice; 


    float total_cost(int n) {
        return BookPrice * n;
    }

public:
   
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore(); 
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void displayDetails() {
        cout << "\nBook ID: " << BookID;
        cout << "\nBook Name: " << BookName;
        cout << "\nBook Price: " << BookPrice << endl;
    }
    void purchase() {
        int n;
        cout << "Enter number of copies required: ";
        cin >> n;
        float cost = total_cost(n);
        cout << "Total cost to be paid: Rs. " << cost << endl;
    }
};

int main() {
    Book b1, b2, b3;

    cout << "Enter details for Book 1:\n";
    b1.inputDetails();

    cout << "\nEnter details for Book 2:\n";
    b2.inputDetails();

    cout << "\nEnter details for Book 3:\n";
    b3.inputDetails();

    cout << "\n=== Book 1 Details ===";
    b1.displayDetails();
    b1.purchase();

    cout << "\n=== Book 2 Details ===";
    b2.displayDetails();
    b2.purchase();

    cout << "\n=== Book 3 Details ===";
    b3.displayDetails();
    b3.purchase();

    return 0;
}
