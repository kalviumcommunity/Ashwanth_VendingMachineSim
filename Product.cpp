#ifndef PRODUCT_H
#define PRODUCT_H

#include "IProduct.cpp"

class Product : public IProduct {
protected:
    std::string name;
    double price;

public:
    Product(const std::string& name, double price) : name(name), price(price) {}
    virtual std::string getName() const override { return name; }
    virtual double getPrice() const override { return price; }
    virtual ~Product() {}
};

#endif // PRODUCT_H
