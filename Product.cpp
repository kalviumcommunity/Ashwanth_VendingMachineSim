#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    float price;
    int quantity;

public:
    Product(std::string name, float price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    void displayInfo() {
        std::cout << "Product: " << name << "\nPrice: " << price << "\nQuantity: " << quantity << std::endl;
    }

    void updateQuantity(int quantity) {
        this->quantity = quantity; 
    }

    Product& setPrice(float price) {
        this->price = price;  
        return *this;  
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
