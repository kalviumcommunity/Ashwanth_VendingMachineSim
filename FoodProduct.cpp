#ifndef FOODPRODUCT_H
#define FOODPRODUCT_H

#include "Product.cpp"

class FoodProduct : public Product {
public:
    FoodProduct(const std::string& name, double price) : Product(name, price) {}
};

#endif // FOODPRODUCT_H
