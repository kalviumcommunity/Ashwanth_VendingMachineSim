#include <iostream>
#include "VendingMachine.cpp"  

int main() {

    VendingMachine* vm = new VendingMachine();

    Product* products[3];
    products[0] = new Product("Chips", 1.50, 10);
    products[1] = new Product("Sprite", 2.00, 15);
    products[2] = new Product("Feastables", 1.00, 20);


    for (int i = 0; i < 3; ++i) {
        vm->addProduct(products[i]);
    }

    vm->displayProducts();

    delete vm; 

    return 0;
}
