/******************************************
 * Concert class that reprecents a concert
 *
 * Author: Marc Chesebro
 *****************************************/

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
	
	//setters
	void setConcertName(std::string name);
	void setFriends(std::vector<std::string> friends);
	void setDesire(int desire);
	void setDate(std::tm date);

	//getters
	std::string  getConcertName();
	std::vector<std::string> getFriends();
	int getDesire();
	std::tm getDate();
};
