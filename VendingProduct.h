// VendingProduct.h
#ifndef VENDINGPRODUCT_H
#define VENDINGPRODUCT_H

#include <string>

class VendingProduct {
public:
    virtual void displayType() const = 0; 
    virtual ~VendingProduct() {} 
};

#endif 
