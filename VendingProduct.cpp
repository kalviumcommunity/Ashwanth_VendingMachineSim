#include "VendingMachine.cpp"

int main() {
    VendingMachine machine;

    IProduct* apple = new FoodProduct("Apple", 1.2);
    IProduct* cola = new DrinkProduct("Cola", 1.5);

    machine.addProduct(apple);
    machine.addProduct(cola);

    std::cout << "Products in the vending machine:" << std::endl;
    machine.displayProducts();

    return 0;
}
