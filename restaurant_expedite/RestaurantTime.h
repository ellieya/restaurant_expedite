#pragma once
#include "Clock.h"

class RestaurantTime {
	Clock currentTime;
	Clock openTime;
	Clock closeTime;

	RestaurantTime();
	RestaurantTime(Clock currentTime, Clock openTime, Clock closeTime);
	Clock getCurrentTime();
	Clock getOpenTime();
	void setOpenTime(Clock openTime);
	Clock getCloseTime();
	void setCloseTime(Clock closeTime);
	bool isOpenTime();
	bool isCloseTime();
};

RestaurantTime::RestaurantTime() {

}

RestaurantTime::RestaurantTime(Clock currentTime, Clock openTime, Clock closeTime)
	:currentTime(currentTime), openTime(openTime), closeTime(closeTime)
{

}

Clock RestaurantTime::getCurrentTime() {
	return currentTime;
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

}

