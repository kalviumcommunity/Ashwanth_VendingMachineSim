#ifndef IPRODUCT_H
#define IPRODUCT_H

#include <string>

class IProduct {
public:
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
    virtual ~IProduct() {}
};

#endif // IPRODUCT_H
