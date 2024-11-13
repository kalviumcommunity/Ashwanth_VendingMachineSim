#include <iostream>

class DrinkProduct : public Product {
public:
    DrinkProduct(std::string name, double price) : Product(name, price) {}

    void displayDrinkInfo() const {
        std::cout << "Drink Product: " << getName() << ", Price: " << getPrice() << std::endl;
    }
};
