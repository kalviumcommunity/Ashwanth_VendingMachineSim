#include <iostream>
#include <string>

class VendingMachine {
private:
    Product* product;

public:
    VendingMachine() : product(nullptr) {}

    void addProduct(Product* p) {
        product = p;
    }

    void displayProduct() {
        if (product != nullptr) {
            product->displayInfo();
        } else {
            std::cout << "No product available." << std::endl;
        }
    }
};
