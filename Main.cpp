#include <iostream>
#include "Product.cpp"
#include "VendingMachine.cpp"

int main() {
    VendingMachine machine;
    
    FoodProduct apple("Apple", 1.5);
    DrinkProduct water("Water", 0.75);

    machine.addProduct(&apple);
    machine.addProduct(&water);

    std::cout << "Products in Vending Machine:" << std::endl;
    machine.displayProducts();

    return 0;
}
