class FoodProduct : public Product {
public:
    string expirationDate;

    FoodProduct(string n, double p, int q, string expDate)
        : Product(n, p, q), expirationDate(expDate) {}

    void displayInfo() override {
        Product::displayInfo();
        cout << "Expiration Date: " << expirationDate << endl;
    }
};
