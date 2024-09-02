#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;
    static int productCount;  
public:
    Product(const std::string& name, double price, int quantity)
        : name(name), price(price), quantity(quantity) {
        productCount++;  
    }

    double getPrice() const {
        return price;
    }

    void displayInfo() {
        std::cout << "Product Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << std::endl;
    }

    static int getProductCount() {
        return productCount;  
    }

    ~Product() {
        productCount--;
    }
};

int Product::productCount = 0;
