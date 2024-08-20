#include "VendingMachine.cpp"

int main() {
    VendingMachine vm;

    Product p1("Chips", 1.50, 10);
    Product p2("Coke", 1.00, 5);

    vm.addProduct(p1);
    vm.addProduct(p2);

    vm.displayProducts();

    vm.purchaseProduct("Chips", 2.00);
    vm.purchaseProduct("Coke", 1.00);

    return 0;
}
