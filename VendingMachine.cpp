#include <iostream>
#include <vector>
#include "FoodProduct.cpp"
#include "DrinkProduct.cpp"

class VendingMachine {
private:
    std::vector<Product*> products;

public:
    void addProduct(Product* product) {
        products.push_back(product);
    }

    void displayProducts() const {
        for (const auto& product : products) {
            std::cout << product->getName() << " - $" << product->getPrice() << std::endl;
        }
    }
};
