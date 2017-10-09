/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

import "Concert.h"

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

bool Concert::operator<(const Concert& other) const{
	
	if(date.tm_year < other.date.tm_year){
		return true;
	}else if(date.tm_year == other.date.tm_year && date.tm_mon < other.date.tm_mon){
		return true
	}else if(date.tm_year == other.date.tm_year && date.tm_mon == other.date.tm_mon && date.tm_mday < other.date.tm_mday){
		return true;
	}

	return false;	
}
