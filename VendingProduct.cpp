#include <iostream>
#include <string>

class VendingProduct {
public:
    virtual void displayType() const = 0;
    virtual ~VendingProduct() {} 
};
