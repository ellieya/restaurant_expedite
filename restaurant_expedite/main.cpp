#include <iostream>
#include <queue>
#include "Randomizer.h"
#include "Dish.h"
#include "Customer.h"

using namespace std;

int main() {
	Customer guy;

	cout << "Customer id is " << guy.getId() << endl;
	while (!guy.isOrderingTimeZero()) {
		cout << "Guy's ordering time right now is " << guy.getOrderingTime() << endl;
		cout << "Decring..." << endl;
		guy.decrOrderingTime();
	}

	cout << "Yo my guy's done ordering!!111" << endl;

	system("pause");
	return 0;
}
