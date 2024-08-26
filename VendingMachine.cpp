#include <iostream>
#include <string>

class VendingMachine {
private:
    Product* products[10];  
    int productCount;

public:
    VendingMachine() : productCount(0) {
        for (int i = 0; i < 10; ++i) {
            products[i] = nullptr;
        }
    }

    
    VendingMachine& addProduct(Product* p) {
        if (productCount < 10) {
            this->products[productCount] = p;
            productCount++;
        } else {
            std::cout << "Vending machine is full!" << std::endl;
        }
        return *this; 
    }

    void displayProducts() {
        if (productCount == 0) {
            std::cout << "No products available." << std::endl;
        } else {
            for (int i = 0; i < productCount; ++i) {
                products[i]->displayInfo();
            }
        }
    }
};
