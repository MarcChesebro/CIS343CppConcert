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
	//TODO initailize default values
	this->date = std::tm;

}

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date){
	this->concertName = conertName;
	this->friends = vector<std::string>();
	this->desire = desire;
	this->date = std::tm();
}


