#pragma once
#include <string>
using namespace std;

class Clock {
	int hour;
	int minute;

public:
	Clock();
	Clock(int hour); //For o'clocks
	Clock(int hour, int minute);
	int getHour();
	int getMin();
	void incrMin();
	void incrHour();
	bool operator == (Clock target);
	string getClockString(int hour); //If argument is 12, will return 12-hour clock. All other cases, return 24-hour clock.
};


Clock::Clock()
	:hour(0), minute(0)
{

}

Clock::Clock(int hour, int minute)
	: hour(hour), minute(minute) {

}

Clock::Clock(int hour)
	: hour(hour), minute(0) {

}

int Clock::getHour() {
	return hour;
}

int Clock::getMin() {
	return minute;
}

void Clock::incrHour() {
	if (hour != 23)
		hour++;
	else
		hour = 0;
}

void Clock::incrMin() {
	if (minute != 59)
		minute++;
	else {
		hour++;
		minute = 0;
	}
}



string Clock::getClockString(int hour) {
	int newHourHolder;
	string stringHour;
	string stringMinute;
	string meridian;
	string finalString;

	//Zero-pad minute if < 10
	if (minute < 10)
		stringMinute = "0" + to_string(minute);
	else
		stringMinute = to_string(minute);

	switch (hour) {
	case 12:
		//Fix hour
		newHourHolder = (this->hour) % 12;

		//Zero-pad hour if < 10, or fix if = 0
		if (newHourHolder < 10)
			if (newHourHolder == 0)
				stringHour = "12";
			else
				stringHour = "0" + to_string(newHourHolder);
		else
			stringHour = to_string(newHourHolder);

		//Calculate meridian
		if (this->hour / 12 == 1)
			meridian = "PM";
		else
			meridian = "AM";
		
		finalString = stringHour + ":" + stringMinute + " " + meridian;
		
		break;
	default:

		//Zero-pad hour if < 10
		if (this->hour < 10)
			stringHour = "0" + to_string(this->hour);
		else
			stringHour = to_string(this->hour);
		
		finalString = stringHour + ":" + stringMinute;
		break;
	}
	
	return finalString;
}

bool Clock::operator==(Clock target) {
	return (hour == target.hour && minute == target.minute);
}