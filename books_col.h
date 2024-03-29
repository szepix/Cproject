#ifndef BOOKS_COL_H
#define BOOKS_COL_H


#include <map>
#include "box.h"
#include <sstream>

//Class BooksCol - inherits from class Box
//Class which is a collection for books

class BooksCol : public Box {
    string to_string() const override {
        stringstream ss;
        ss << "Books: \n";
        map<unsigned int, Book> books = get_books();
        map<unsigned int, Book>::const_iterator it;
        for (it = books.cbegin(); it != books.cend(); it++) {
            ss << it->second << endl;
        }
        return ss.str();
    }
};

#endif