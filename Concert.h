/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

//include gaurds
#ifndef _Concert
#define _Concert

//includes
#include <string>
#include <ctime>
#include <vector>

/*********************************************
 * Concert object that represents a concert
 ********************************************/
class Concert{

private:
	// Name of the concert
	std::string concertName;

	// Vector<string> of friends that you want to go
	std::vector<std::string> friends;

	// desire to go to the concert. from 1-10
	int desire;

	// The date of the concert stored in a std::tm
	std::tm date;

public:
	//constructors
	
	/*
	 * default Constructor
	 */
	Concert();

	/*
	 * Conctructor that takes all parameters
	 * concertName: std::string that holds the name of the concert
	 * friends: std::vector<strings> that holds the friends that
	 * 	you want to come with you
	 * desire: int for 1-10 that represents how much you want to go
	 * date: std::tm that hold the date of the concert
	 */
	Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date);
	
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
	bool operator<(const Concert& other) const;
	
	/*
	 * Overriding the << operator
	 *
	 * in format: <concertName> [mm/dd/yyyy] Desire: <desire>
	 *
	 * os: osstream to print to
	 * concert: concert to get information from
	 * returns: osstream full of data
	 */
	friend std::ostream& operator<<(std::ostream&, const Concert& concert);
	
	/*********************************
	 * getters
	 *********************************/
		
	/*
	 *returns: concertName
	 */
	std::string getConcertName() const;

	/*
	 *returns: friends in std::vector<std::string>
	 */
	std::vector<std::string> getFriends() const;

	/*
	 * returns: desire
	 */
	int getDesire() const;
	
	/*
	 * retuens: date as std::tm
	 */
	std::tm getDate() const;	
};
#endif
