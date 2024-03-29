#ifndef SALESMAN_H
#define SALESMAN_H

#include <iostream>
#include <vector>
#include "person.h"
#include "person_col.h"
#include "customer.h"

using namespace std;

//Class Salesman - inherits from class Person
//Contains private variables: departments, permissions, experience, customer

class Salesman : public Person {
public:
    Salesman(string name, string surname, unsigned int cardId, string permissions, unsigned int experience,
             vector<string> departments);

    Salesman() {};

    bool check_if_same(const Salesman &obj, const Salesman &obj2) const;

    unsigned int display_experience() const { return experience; }

//getters for variables
    string get_permissions() const { return permissions; }

    vector<string> get_departments() { return departments; }

    Customer &get_customer() { return customer; }

    string to_string() const;

    void display_departments();

//setters for variables
    void set_permissions(string new_permissions);

    void set_experience(unsigned int new_experience);

    void set_customer(Customer &new_customer);

    void add_department(string new_department);

    void replace_departments(vector<string> new_list);

    void remove_department(string department);

    void add_book_to_basket(Book &book);

    void add_book_to_ordered_books(Book &book);

//operators overloading
    Salesman &operator=(const Salesman &obj);

    friend bool operator==(const Salesman &obj, const Salesman &obj2);

    friend bool operator!=(const Salesman &obj, const Salesman &obj2);

    friend ostream &operator<<(ostream &output, const Salesman &obj);

private:
    vector<string> departments;
    string permissions;
    unsigned int experience;
    Customer customer;
};

#endif

