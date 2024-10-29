#include "VendingProduct.h"
#include <iostream>
#include <string>

class FoodProduct : public VendingProduct {
private:
    std::string name;
    double price;
public:
    FoodProduct(std::string n, double p) : name(n), price(p) {}
    void displayType() const override {
        std::cout << "This is a food product: " << name << " priced at " << price << "\n";
    }
};
