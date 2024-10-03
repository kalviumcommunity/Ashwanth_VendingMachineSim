#include "VendingMachine.cpp"

int main() {
    VendingMachine machine;

    Product* coke = new Product("Coke", 1.5, 10);
    Product* chips = new Product("Chips", 2.0, 5);

    machine.addProduct(coke);
    machine.addProduct(chips);

    machine.displayProducts();

    std::cout << "Total number of products in the vending machine: " << machine.getProductCount() << std::endl;
    return 0;
}
