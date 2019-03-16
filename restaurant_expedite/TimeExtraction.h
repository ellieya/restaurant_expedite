/*
I would change all the throws to appropriate exception throws later on
*/


#pragma once
#include <string>

using namespace std;

class TimeExtraction {
public:
	static void extractIntFromString(string input, int & hourHolder, int & minuteHolder);

};

void TimeExtraction::extractIntFromString(string input, int & hourHolder, int & minuteHolder) {
	string strHourHolder = "";
	string strMinHolder = "";
	int tempIntHolder;

	//Exception #1: If input is > 5
	if (input.length() > 5)
		throw "Invalid string";

	//int i should be declared outside since it is used twice in different loops. Value maintanence necessary.
	int i;

	//Hour
	for (i = 0; i < 3; i++) {
		if (input[i] == ':')
			break;
		strHourHolder += input[i];
	}

	//Exception #2: If either hour is abnormally long, or : is not present in string
	if (i == 3)
		throw "Invalid string";

	//If valid string, should be i = 2, so increment to avoid getting ':'
	i++;

	//Minute
	while (i < input.length()) {
		strMinHolder += input[i];
		i++;
	}

	//Exception #3 and #4: Either hour greater than 24 or minute is greater than/equal to 60
	tempIntHolder = stoi(strHourHolder);
	if (tempIntHolder > 24)
		throw "Invalid string";
	else
		hourHolder = tempIntHolder;

	tempIntHolder = stoi(strMinHolder);
	if (tempIntHolder >= 60)
		throw "Invalid string";
	else
		minuteHolder = tempIntHolder;
	

}