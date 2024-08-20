#include <iostream>
#include <vector>
#include "Product.cpp"

class VendingMachine {
private:
    std::vector<Product> products;

public:
    VendingMachine() {}

    void addProduct(const Product& product) {
        products.push_back(product);
    }

    void displayProducts() const {
        std::cout << "Available Products:\n";
        for (const auto& product : products) {
            std::cout << "- " << product.getName() << ": " << product.getPrice() << "\n";
        }
    }

    void purchaseProduct(const std::string& productName, double moneyInserted) {
        for (auto& product : products) {
            if (product.getName() == productName) {
                if (moneyInserted >= product.getPrice()) {
                    std::cout << "Dispensing " << productName << ".\n";
                    std::cout << "Change: " << (moneyInserted - product.getPrice()) << "\n";
                    product.reduceQuantity();
                } else {
                    std::cout << "Insufficient funds.\n";
                }
                return;
            }
        }
        std::cout << "Product not found.\n";
    }
};
