#include "Product.cpp"
#include "FoodProduct.cpp"
#include "DrinkProduct.cpp"

int main() {
    Product* product1 = new FoodProduct("Apple", 1.5, 100, "2024-12-01");
    Product* product2 = new DrinkProduct("Soda", 2.0, 50, 1.5);
    Product* product3 = new Product("Chips", 0.99);  

    product1->displayInfo();
    product2->displayInfo();
    product3->displayInfo("INR");  

    delete product1;
    delete product2;
    delete product3;

    return 0;
}
