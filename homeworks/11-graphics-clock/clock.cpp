#include "clock.h"
#include <iostream>
#include <chrono>
#include <ctime>

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const
{
	int calculate_hours = (seconds / 60) * 60 % 24;

	return calculate_hours;
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const
{

	int calculate_minutes = (seconds / 60) % 60;

	return calculate_minutes;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const
{
	int calculate_seconds = seconds % 60;

	return calculate_seconds;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const
{
	
	std::time_t current_time;
	//std::string current_time;

	// Stores time in current_time
	time(&current_time);
	current_time = get_hours() + get_minutes() + get_seconds();
	std::cout << current_time << " seconds has passed since 00:00:00 GMT, Jan 1, 1970";

	//Return the time in 12 format 12:35:45
	return ("%H:%M:%S");

}

void Clock::update_time()
{
	seconds += 1;
}
