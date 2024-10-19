class DrinkProduct : public Product {
public:
    double volume;
    DrinkProduct(string n, double p, int q, double v)
        : Product(n, p, q), volume(v) {}

    void displayInfo() override {
        Product::displayInfo();
        cout << "Volume: " << volume << " liters" << endl;
    }
};
