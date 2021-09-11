#include <iostream>
#include <string>
#include <sstream>
#include <utility>

#include "book.h"

Book::Book(string title, string author, string genre, unsigned int id, double price, unsigned int number) {
    this->title = std::move(title);
    this->author = std::move(author);
    this->genre = std::move(genre);
    this->id = id;
    this->price = price;
    this->number = number;
}

string Book::to_string() const {
    stringstream ss;
    ss << "Id: " << id << "   Title: " << title << " - " << author << "   Price: " << price << " zl "
       << "   Number of books: " << number;
    return ss.str();
}

Book &Book::operator=(const Book &b) {
    if (this != &b) {
        title = b.title;
        author = b.author;
        genre = b.genre;
        id = b.id;
        price = b.price;
        number = b.number;
    }
    return *this;
}


bool operator==(const Book &b1, const Book &b2) {
    return (b1.id == b2.id);
}

ostream &operator<<(ostream &os, const Book &b) {
    os << b.to_string();
    return os;
}

void Book::set_title(string new_title) {
    title = std::move(new_title);
}

void Book::set_genre(string new_genre) {
    genre = std::move(new_genre);
}

void Book::set_author(string new_author) {
    author = std::move(new_author);
}

void Book::set_id(unsigned int new_Id) {
    id = new_Id;
}

void Book::set_price(double new_price) {
    price = new_price;
}

void Book::set_number(unsigned int new_number) {
    number = new_number;
}