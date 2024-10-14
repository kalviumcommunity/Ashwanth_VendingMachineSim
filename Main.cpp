#include "VendingMachine.cpp"

int main() {
    
    VendingMachine machine;

    
    Product* soda = new Product("Soda", 1.5, 10);
    Product* chips = new Product("Chips", 2.0, 5);

    
    machine.addProduct(soda);
    machine.addProduct(chips);


    machine.displayProducts();

    std::cout << "Total number of products in the vending machine: " << machine.getProductCount() << std::endl;
    return 0;
}
