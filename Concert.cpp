/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

//includes
#include "Concert.h"
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

/*****************************************
 *constructors
 ****************************************/

/*
 * default Constructor
 */
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

/*
 * Conctructor that takes all parameters
 * concertName: std::string that holds the name of the concert
 * friends: std::vector<strings> that holds the friends that
 * 	you want to come with you
 * desire: int for 1-10 that represents how much you want to go
 * date: std::tm that hold the date of the concert
 */
Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date){
	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

/*****************************************
 * getters
 *****************************************/

/*
 *returns: concertName
 */
std::string Concert::getConcertName() const{
	return concertName;
}

/*
 *returns: friends in std::vector<std::string>
 */
std::vector<std::string> Concert::getFriends() const{
	return friends;
}

/*
 *returns: desire
 */
int Concert::getDesire() const{
	return desire;
}

/*
 *returns: date as std::tm
 */
std::tm Concert::getDate() const{
	return date;
}	

/*******************************
 * operator overides
 *******************************/

/*
 * Overriding the  < operator
 * first by comparing the dates then by desire
 *
 * other: Concert& of the Concert to compare this too
 * returns: true if this is less than other otherwise false
 */
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

/*
 * Overriding the << operator
 *
 * in format: <concertName> [mm/dd/yyyy] Desire: <desire>
 *
 * os: osstream to print to
 * concert: concert to get information from
 * returns: osstream full of data
 */
std::ostream& operator<<(std::ostream& os, const Concert& concert) {

	os << concert.getConcertName() << " [" << concert.getDate().tm_mon + 1 << '/' << concert.getDate().tm_mday + 1 << '/' << concert.getDate().tm_year + 1900 << "] Desire: " << concert.getDesire();
	return os;
}
