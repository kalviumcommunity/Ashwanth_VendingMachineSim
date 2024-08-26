#include <iostream>
#include "Product.cpp"
#include "VendingMachine.cpp"

int main() {
    Product products[3] = {
        Product("Chips", 1.50, 345),
        Product("Coke", 2.00, 15),
        Product("Feastables", 1.00, 27)
    };
    VendingMachine vm;

    for (int i = 0; i < 3; ++i) {
        vm.addProduct(&products[i]);
    }
    
    vm.displayProducts();

    return 0;
}
