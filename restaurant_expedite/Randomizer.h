/*
Time-based randomizer
*/

#pragma once
#include <cstdlib>
#include <ctime>

class Randomizer {

	static bool seedExists;

	static void seed();
	static void initSeed(); //If seedExists is false, seeds RNG. Else, does nothing.


public:
	static int generateInt(int max);
	//generateInt from 0 to specified int
};

int Randomizer::generateInt(int max) {

	initSeed();
	return rand() % max;
}

void Randomizer::seed() {
	srand(time(0));
	seedExists = true;
}

void Randomizer::initSeed() {
	if (!seedExists) {
		seed();
	}
}

bool Randomizer::seedExists = false;