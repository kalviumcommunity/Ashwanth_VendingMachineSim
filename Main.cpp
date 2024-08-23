#include <iostream>
#include "Product.cpp"
#include "VendingMachine.cpp"

int main() {
    Product p1("Chips",100, 9);

    p1.setPrice(250);

    VendingMachine vm;
    vm.addProduct(&p1);
    vm.displayProduct();

    return 0;
}
