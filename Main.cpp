#include "Product.cpp"
#include "FoodProduct.cpp"
#include "DrinkProduct.cpp"

int main() {

    Product* product1 = new FoodProduct("Apple", 1.5, 100, "2024-12-01");
    Product* product2 = new DrinkProduct("Soda", 2.0, 50, 1.5);

    product1->displayInfo();
    product2->displayInfo();


    delete product1;
    delete product2;

    return 0;
}
