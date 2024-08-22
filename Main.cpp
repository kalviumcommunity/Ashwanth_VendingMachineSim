#include <iostream>
#include "Product.cpp"
#include "VendingMachine.cpp"

int main() {
    Product p1("Chips", 1.50, 9);
    VendingMachine vm;
    vm.addProduct(&p1);
    vm.displayProduct();

    return 0;
}
