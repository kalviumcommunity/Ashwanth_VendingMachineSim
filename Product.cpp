#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}

    Product(string n, double p) : name(n), price(p), quantity(0) {}

    virtual ~Product() {
        cout << "Product " << name << " is being deleted." << endl;
    }

    virtual void displayInfo() {
        cout << "Product: " << name << ", Price: " << price << ", Quantity: " << quantity << endl;
    }

    void displayInfo(string currency) {
        cout << "Product: " << name << ", Price: " << price << " " << currency << ", Quantity: " << quantity << endl;
    }
};
