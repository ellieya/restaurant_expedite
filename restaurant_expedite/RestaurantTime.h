#pragma once
#include "Clock.h"
#include "TimeExtraction.h"

class RestaurantTime {
	Clock currentTime;
	Clock openTime;
	Clock closeTime;

public:
	RestaurantTime();
	RestaurantTime(string currentTime, string openTime, string closeTime);
	Clock* getCurrentTime();
	//Address is returned to allow manipulation of this instance of currentTime
	//through Clock's methods as opposed to having to write new functions
	Clock getOpenTime();
	void setOpenTime(Clock openTime);
	Clock getCloseTime();
	void setCloseTime(Clock closeTime);
	bool isOpenTime();
	bool isCloseTime();
};

RestaurantTime::RestaurantTime() {

}

RestaurantTime::RestaurantTime(string currentTime, string openTime, string closeTime)
{
	int tempHourHolder;
	int tempMinHolder;
	string timesArray[3] = { currentTime, openTime, closeTime };

	Clock* objectTimesArray[3] = { &(this->currentTime), &(this->openTime), &(this->closeTime) };


	for (int i = 0; i < 3; i++) {
		TimeExtraction::extractIntFromString(timesArray[i], tempHourHolder, tempMinHolder);
		*objectTimesArray[i] = Clock(tempHourHolder, tempMinHolder);
	}

}

Clock* RestaurantTime::getCurrentTime() {
	return &currentTime;
}

Clock RestaurantTime::getOpenTime() {
	return openTime;
}

void RestaurantTime::setOpenTime(Clock openTime) {
	this->openTime = openTime;
}

Clock RestaurantTime::getCloseTime() {
	return closeTime;
}

void RestaurantTime::setCloseTime(Clock closeTime) {
	this->closeTime = closeTime;
}

bool RestaurantTime::isOpenTime() {
	return currentTime == openTime;
}

bool RestaurantTime::isCloseTime() {
	return currentTime == closeTime;
}
