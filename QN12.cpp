#include <iostream>
#include <string>
#include <iomanip> 

class online_shopping {
protected:
    std::string item_name;
    int quantity;
    double unit_price;
    double item_cost;

public:
    void get_item_details() {
        std::cout << "--- Enter Item Details ---" << std::endl;
        std::cout << "Enter item name: ";
        std::cin.ignore(); 
        std::getline(std::cin, item_name);
        
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
        
        std::cout << "Enter unit price (in $): ";
        std::cin >> unit_price;
      
        item_cost = quantity * unit_price;
    }

   
    double get_item_cost() const {
        return item_cost;
    }
};


class Shipping_details {
protected:
    double shipping_charge;

public:
    void get_shipping_details() {
        std::cout << "\n--- Enter Shipping Details ---" << std::endl;
        std::cout << "Enter shipping charge (in Rs): ";
        std::cin >> shipping_charge;
    }

    double get_shipping_charge() const {
        return shipping_charge;
    }
};


class Bill : public online_shopping, public Shipping_details {
private:
    double total_bill;

public:
    void calculate_bill() {
        total_bill = get_item_cost() + get_shipping_charge();
    }

    void display_bill() {
        std::cout << std::fixed << std::setprecision(2);
        
        std::cout << "\n==================================" << std::endl;
        std::cout << "            FINAL BILL            " << std::endl;
        std::cout << "==================================" << std::endl;
        
        // Display details inherited from online_shopping
        std::cout << "Item Name     : " << item_name << std::endl;
        std::cout << "Quantity      : " << quantity << std::endl;
        std::cout << "Unit Price    : Rs" << unit_price << std::endl;
        std::cout << "----------------------------------" << std::endl;
        std::cout << "Item Total Cost : Rs" << get_item_cost() << std::endl;
        
        // Display details inherited from Shipping_details
        std::cout << "Shipping Charge : Rs" << get_shipping_charge() << std::endl;
        std::cout << "----------------------------------" << std::endl;
        
        // Display the final calculation
        std::cout << "TOTAL AMOUNT DUE: Rs" << total_bill << std::endl;
        std::cout << "==================================" << std::endl;
    }
};

int main() {
    Bill final_bill;

    final_bill.get_item_details();
    
    final_bill.get_shipping_details();
    
    final_bill.calculate_bill();

    final_bill.display_bill();
    
    return 0;
}
