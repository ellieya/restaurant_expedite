#pragma once
#include "Randomizer.h"
#include "Dish.h"

class Customer {
	static int idHolder;
	int id;
	int orderingTime; //Time it takes for customer to order from menu
	char status; //"WAIT_ORDER" (O), "WAIT_FOOD" (F), or "SERVICED" (S)
	Dish order;

	//Init assistants
	int generateOrderingTime();
	

public:
	Customer();

	//related to id data member
	int getId();

	//related to orderingTime member
	int getOrderingTime();
	void decrOrderingTime();
	bool isOrderingTimeZero();

	//related to status
	char getStatus();
	void switchStatus() ; //Auto set (preferred)
	void setStatus(char); //Manual set

	//related to order
	Dish getOrder();
	void setOrder(Dish);
};

Customer::Customer()
	:id(idHolder), orderingTime(generateOrderingTime()), status('O')
{
	//Intentionally blank
}

int Customer::getId() {
	return id;
}

int Customer::getOrderingTime() {
	return orderingTime;
}

void Customer::decrOrderingTime() {
	orderingTime--;
}

bool Customer::isOrderingTimeZero() {
	return (orderingTime == 0);
}

char Customer::getStatus() {
	return status;
}

void Customer::switchStatus() {
	switch (status) {
	case 'O':
		status = 'F';
		break;
	case 'F':
		status = 'S';
		break;
	default:
		throw "ERR";
	}
}

void Customer::setStatus(char status) {
	this->status = status;
}

Dish Customer::getOrder() {
	return order;
}

void Customer::setOrder(Dish order) {
	this->order = order;
}

int Customer::generateOrderingTime() {
	return Randomizer::generateInt(1,30);
}

int Customer::idHolder = 0;