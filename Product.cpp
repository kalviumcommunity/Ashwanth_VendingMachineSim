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

    double getPrice() const {
        return price;
    }

    void reduceQuantity() {
        if (quantity > 0) {
            --quantity;
        }
    }
};
