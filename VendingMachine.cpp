#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include "FoodProduct.cpp"
#include "DrinkProduct.cpp"
#include <vector>
#include <iostream>

class VendingMachine {
private:
    std::vector<IProduct*> products;

public:
    void addProduct(IProduct* product) {
        products.push_back(product);
    }

    void displayProducts() const {
        for (const auto& product : products) {
            std::cout << "Product: " << product->getName() << ", Price: " << product->getPrice() << std::endl;
        }
    }

    ~VendingMachine() {
        for (auto& product : products) {
            delete product;
        }
    }
};

#endif // VENDINGMACHINE_H
