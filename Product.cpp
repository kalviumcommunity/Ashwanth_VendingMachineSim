#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    float price;
    int quantity;

public:
    Product(std::string n, float p, int q) : name(n), price(p), quantity(q) {}

    void displayInfo() {
        std::cout << "Product: " << name << "\nPrice: $" << price << "\nQuantity: " << quantity << std::endl;
    }

    void updateQuantity(int q) {
        quantity = q;
    }

    std::string getName() {
        return name;
    }

    float getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};
