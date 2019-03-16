#pragma once

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
	bool operator =();

	//I want an overloaded cout here...
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
		hour == 0;
}

void Clock::incrMin() {
	if (minute != 59)
		minute++;
	else {
		hour++;
		minute = 0;
	}
}


/*
{
	string stringHour;
	string stringMinute;
	string meridian;


	//Zero-pad hour if < 10
	if (hour < 10)
		stringHour = "0" + hour;
	else
		stringHour = hour;

	//Zero-pad minute if < 10
	if (minute < 10)
		stringMinute = "0" + hour;
	else
		stringMinute = minute;

	//Calculate meridian
	if (hour / 12 == 1)
		meridian = "PM";
	else
		meridian = "AM";

	stream << hour % 12 << ":" << minute << meridian;

}
*/