/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

#include "Concert.h"
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

//constructors
Concert::Concert(){
	this->concertName = "";
	this->friends = vector<std::string>;
	this->desire = 0;
	this->date = std::tm;
	this->date.tm_year = 0;
	this->date.tm_mon = 0;
	this->date.tm_mday = 1;
}

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date){
	this->concertName = conertName;
	this->friends = vector<std::string>();
	this->desire = desire;
	this->date = std::tm();
}

std::ostream& operator<<(std::ostream& os, const Concert::Concert& concert){  

	std::tm date = concert.getDate();
	os << concert.getConcertName() << " [" << date.tm_mon  << '/' <<  date.tm_mday << '/' << date.tm_year << "]"; 
	return os;  
}  

//getters
std::string Concert::getConcertName() const{
	return concertName;
}

std::vector<std::string> Concert::getFriends() const{
	return friends;
}

int Concert::getDesire() const{
	return desire;
}

std::tm Concert::getDate() const{
	return date;
}	

//operator overides
bool Concert::operator<(const Concert& other) const{
	
	if(date.tm_year < other.date.tm_year){
		return true;

	}else if(date.tm_year == other.date.tm_year && date.tm_mon < other.date.tm_mon){
		return true

	}else if(date.tm_year == other.date.tm_year && date.tm_mon == other.date.tm_mon && date.tm_mday < other.date.tm_mday){
		return true;

	}else if(date.tm_year == other.date.tm_year && date.tm_mon == other.date.tm_mon && date.tm_mday == other.date.tm_mday && desire < other.desire){
		return true;
	}

	return false;	
}
