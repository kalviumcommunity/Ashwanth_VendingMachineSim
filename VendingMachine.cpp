#include <iostream>
#include "Product.cpp"

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

    int getProductCount() const {
        return productCount;
    }

    VendingMachine& addProduct(Product* product) {
        if (productCount < 10) {
            products[productCount] = product;
            productCount++;
        } else {
            std::cout << "Vending machine is full!" << std::endl;
        }
        return *this;
    }

    void displayProducts() const {
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

    ~VendingMachine() {
        for (int i = 0; i < productCount; ++i) {
            delete products[i];
        }
    }
};
