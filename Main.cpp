#include <iostream>
#include "VendingMachine.cpp"

int main() {

    VendingMachine* vm = new VendingMachine();

    Product* products[3];
    products[0] = new Product("Chips", 1.50, 10);
    products[1] = new Product("Soda", 2.00, 15);
    products[2] = new Product("Candy", 1.00, 20);


    for (int i = 0; i < 3; ++i) {
        vm->addProduct(products[i]);
    }

    vm->displayProducts();

    vm->sellProduct(1);

    std::cout << "Total Sales: $" << VendingMachine::getTotalSales() << std::endl;

    std::cout << "Total number of products created: " << Product::getProductCount() << std::endl;

    delete vm;

    return 0;
}
