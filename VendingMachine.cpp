#include <iostream>
#include <string>

class VendingMachine {
private:
    Product* product;

public:
    VendingMachine() : product(nullptr) {}

    VendingMachine& addProduct(Product* p) {
        this->product = p; 
        return *this; 
    }

    void displayProduct() {
        if (product != nullptr) {
            product->displayInfo();
        } else {
            std::cout << "No product available." << std::endl;
        }
    }
};
