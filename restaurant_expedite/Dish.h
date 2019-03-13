#pragma once
#include <string>

using namespace std;

class Dish {
	string name;
	int cookTime;

public:
	Dish();
	Dish(string name, int cookTime);
	string getName();
	int getCookTime();
};

Dish::Dish() {
	//Intentionally blank
}

Dish::Dish(string name, int cookTime)
	:name(name), cookTime(cookTime)
{

}

string Dish::getName() {
	return name;
}

int Dish::getCookTime() {
	return cookTime;
}