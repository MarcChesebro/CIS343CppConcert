/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

#ifndef Concert
#define Concert

#include <string>
#include <ctime>
#include <vector>

class Concert{

private:
	// Name of the concert
	std::string concertName;

	// Vector<string> of friends that you want to go
	std::vector<std::string> friends;

	// desire to go to the concert. from 1-10
	int desire;

	// The date of the concert
	std::tm date;

public:
	//constructors
	Concert();
	Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date);
	bool Concert::operator<(const Concert& other) const;

	//TODO getters
	
	std::string getConcertName() const;

	std::vector<std::string> getFriends() const;

	int getDesire() const;

	std::tm getDate() const;	
};
#endif
