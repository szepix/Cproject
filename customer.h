#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "basket.h"
#include "ordered_books.h"
#include "utils.h"
#include "person.h"


using namespace std;

class Customer : public Person
{
public:
	Customer(string name, string surname, unsigned int cardId, double money);
	Customer() {};
	// Customer(const Customer& c) : name(c.name), surname(c.surname), cardId(c.cardId), age(c.age), basket(c.basket), preferences(c.preferences), ordered_books(c.ordered_books) {}
	~Customer() {}

	Customer& operator=(const Customer& c);

	double get_money() const {return money;}
	const Basket& getBasket() const { return basket; }
	const vector<string>& getPreferences() const { return preferences; }

	void add_preference(string preference);
	bool remove_preference(string preference);

	void set_money(double new_money) {money = new_money;};
	void add_to_basket(Book& book);
	void remove_from_basket(int book_id);

	void add_to_ordered_books(Book& book);
	void remove_from_ordered_books(int book_id);

	string to_string() const;
	string preferences_to_string() const;

	friend bool operator==(const Customer& c1, const Customer& c2);
	friend bool operator!=(const Customer& c1, const Customer& c2);
	friend ostream& operator<<(ostream& os, const Customer& dt);

private:
	double money;
	Basket basket;
	OrderedBooks ordered_books;
	vector<string> preferences;
};

#endif
