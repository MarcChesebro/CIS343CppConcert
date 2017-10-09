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
	std::vector<std::string> friends;
	this->friends = friends;
	this->desire = 0;
	std::tm date;
	this->date = date;
	this->date.tm_year = 0;
	this->date.tm_mon = 0;
	this->date.tm_mday = 1;
}

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date){
	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
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
	
	if(date.tm_year < other.getDate().tm_year){
		return true;

	}else if(date.tm_year == other.getDate().tm_year && date.tm_mon < other.getDate().tm_mon){
		return true;

	}else if(date.tm_year == other.getDate().tm_year && date.tm_mon == other.getDate().tm_mon && date.tm_mday < other.getDate().tm_mday){
		return true;

	}else if(date.tm_year == other.date.tm_year && date.tm_mon == other.getDate().tm_mon && date.tm_mday == other.getDate().tm_mday && desire < other.desire){
		return true;
	}

	return false;	
}

std::ostream& operator<<(std::ostream& os, const Concert& concert) {

	os << concert.getConcertName() << " [" << concert.getDate().tm_mon + 1 << '/' << concert.getDate().tm_mday + 1 << '/' << concert.getDate().tm_year + 1900 << "] Desire: " << concert.getDesire();
	return os;
}
