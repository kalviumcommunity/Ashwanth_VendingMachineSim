
#include "VendingProduct.h"
#include <iostream>
#include <string>

class DrinkProduct : public VendingProduct {
private:
    std::string name;
    double price;
public:
    DrinkProduct(std::string n, double p) : name(n), price(p) {}
    void displayType() const override {
        std::cout << "This is a drink product: " << name << " priced at " << price << "\n";
    }
};
