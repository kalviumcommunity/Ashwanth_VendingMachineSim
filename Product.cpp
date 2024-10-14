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

    
    ~Product() {
        std::cout << "Product " << name << " is being deleted." << std::endl;
    }

    std::string getName() {
        return name;
    }

    float getPrice() {
        return price;
    }

    void setPrice(float price) {
        this->price = price;
    }

    int getQuantity() {
        return quantity;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }
};
