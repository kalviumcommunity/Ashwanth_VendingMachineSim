#include <iostream>
#include <string>
#include "Product.cpp"

class VendingMachine {
private:
    Product* products[10];  // Array of pointers to Product objects
    int productCount;
    static double totalSales;  // Static variable to keep track of total sales

public:
    VendingMachine() : productCount(0) {
        for (int i = 0; i < 10; ++i) {
            products[i] = nullptr;
        }
    }

    VendingMachine& addProduct(Product* p) {
        if (productCount < 10) {
            products[productCount] = p;
            productCount++;
        } else {
            std::cout << "Vending machine is full!" << std::endl;
        }
        return *this;
    }

    void sellProduct(int index) {
        if (index >= 0 && index < productCount && products[index] != nullptr) {
            totalSales += products[index]->getPrice();
            delete products[index];
            products[index] = nullptr;
            std::cout << "Product sold!" << std::endl;
        } else {
            std::cout << "Invalid product index." << std::endl;
        }
    }

    void displayProducts() {
        if (productCount == 0) {
            std::cout << "No products available." << std::endl;
        } else {
            for (int i = 0; i < productCount; ++i) {
                if (products[i] != nullptr) {
                    products[i]->displayInfo();
                }
            }
        }
    }

    static double getTotalSales() {
        return totalSales; 
    }

    ~VendingMachine() {
        for (int i = 0; i < productCount; ++i) {
            delete products[i];
        }
    }
};

double VendingMachine::totalSales = 0.0;
