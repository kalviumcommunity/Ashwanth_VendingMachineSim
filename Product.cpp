#include <iostream>
#include <string>

class Product {
protected:
    std::string name;
    double price;

public:
    Product(std::string name, double price) : name(name), price(price) {}

    std::string getName() const { return name; }
    double getPrice() const { return price; }
};
