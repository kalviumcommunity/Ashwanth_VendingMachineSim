#ifndef DRINKPRODUCT_H
#define DRINKPRODUCT_H

#include "Product.cpp"

class DrinkProduct : public Product {
public:
    DrinkProduct(const std::string& name, double price) : Product(name, price) {}
};

#endif // DRINKPRODUCT_H
