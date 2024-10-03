#include <iostream>
#include "VendingMachine.cpp"  

int main() {

    VendingMachine machine;

    Product* product1 = new Product("Soda", 1.50, 10);
    Product* product2 = new Product("Chips", 1.00, 5);

    machine.addProduct(product1).addProduct(product2);

    machine.displayProducts();

    std::cout << "Total number of products in the vending machine: " << machine.getProductCount() << std::endl;

    delete product1;
    delete product2;

    return 0;
}
