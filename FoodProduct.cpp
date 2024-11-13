#include <iostream>

class FoodProduct : public Product {
public:
    FoodProduct(std::string name, double price) : Product(name, price) {}

    void displayFoodInfo() const {
        std::cout << "Food Product: " << getName() << ", Price: " << getPrice() << std::endl;
    }
};
