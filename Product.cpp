#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;

public:
    Product(const std::string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {}

    std::string getName() const {
        return name;
    }

    
    void setName(const std::string& newName) {
        name = newName;
    }

    
    double getPrice() const {
        return price;
    }


    void setPrice(double newPrice) {
        if (newPrice >= 0) {
            price = newPrice;
        }
    }

    
    int getQuantity() const {
        return quantity;
    }


    void setQuantity(int newQuantity) {
        if (newQuantity >= 0) {
            quantity = newQuantity;
        }
    }

    void displayInfo() const {
        std::cout << "Product Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << std::endl;
    }
};
