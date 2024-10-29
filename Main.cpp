#include "DrinkProduct.cpp"
#include "FoodProduct.cpp"
#include <iostream>

int main() {
    VendingProduct* drink = new DrinkProduct("Coke", 1.5);
    VendingProduct* food = new FoodProduct("borgir", 2.5);

    drink->displayType(); 
    food->displayType();   

    delete drink;
    delete food;

    return 0;
}
