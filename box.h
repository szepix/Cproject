#ifndef BOX_H
#define BOX_H

#include <map>

#include "book.h"

using namespace std;

//Class Box which is parent class for: Basket, BooksCol, OrderedBooks
//Contains protected variable - books

class Box {
public:

    //methods to add and delete elements form collection
    void add_book(Book &c);

    void delete_book(unsigned int id);

    //getters for variables
    Book &get_book(unsigned int id);

    const map<unsigned int, Book> &get_books() const;

    //method for checking if book with specified id exists
    bool has_book_id(unsigned int id);

    bool is_empty() const { return books.empty(); }

    virtual string to_string() const = 0;

    virtual ~Box() = default;;
protected:
    map<unsigned int, Book> books;
};

#endif
