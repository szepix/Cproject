#ifndef ORDERED_BOOKS_H
#define ORDERED_BOOKS_H

#include <map>

#include "book.h"
#include "box.h"

using namespace std;

//Class OrderedBooks - inherits from class Box

class OrderedBooks : public Box {
public:
//method to get string from object
    string to_string() const override;

//operator overloading
    friend ostream &operator<<(ostream &os, const OrderedBooks &basket);

//getters for variables
    double get_total_price() const;
};

#endif