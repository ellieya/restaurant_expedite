#include <iostream>
#include <queue>
#include "Randomizer.h"
#include "Dish.h"
#include "Customer.h"
#include "Clock.h"

using namespace std;

int main() {

	Clock midnight;

	cout << "It's " << midnight.getHour() << ":" << midnight.getMin() << endl;

	system("pause");
	return 0;
}
