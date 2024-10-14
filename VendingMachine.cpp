#include "Product.cpp"
#include <iostream>

class VendingMachine {
private:
    int productCount;
    Product* products[10];

public:
    VendingMachine() {
        productCount = 0;
    }

    ~VendingMachine() {
        for (int i = 0; i < productCount; i++) {
            delete products[i];
        }
        std::cout << "Vending machine is being shut down, and products are deleted." << std::endl;
    }

    void addProduct(Product* product) {
        if(productCount < 10) {
            products[productCount] = product;
            productCount++;
        }
    }

    void displayProducts() {
        for (int i = 0; i < productCount; i++) {
            std::cout << products[i]->getName() << ": " << products[i]->getPrice() 
                      << " (" << products[i]->getQuantity() << " left)" << std::endl;
        }
    }

    int getProductCount() {
        return productCount;
    }
};
