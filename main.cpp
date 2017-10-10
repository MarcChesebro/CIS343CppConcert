/******************************************
 * Simple progeam to test the Concert object
 *
 * Author: Marc Chesebro
 *****************************************/

//includes
#include "Concert.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

/*
 * A function that generates a random date and puts it in 
 * a std::tm
 * returns: std::tm with random date
 */
std::tm randomDate() {
	
	//date struct to hold random date
	std::tm date;	

	//initialize random values to the dates
	date.tm_year = rand() % 10;
	date.tm_mon = rand() % 12;
	date.tm_mday = rand() % 31;

	//return 
	return date;
}

/*
 * simple main function that generates Concerts with random dates
 * and then sorts them using std::sort
 */
int main(){
	
	//initailize a vector to hold the Concerts
	std::vector<Concert> concerts;	
	
	//initialize an empty vector<string> to give to the Concerts
	std::vector<std::string> friends;
	
	//initialize 2 dates to make sure some 
	//date collisions happen
	std::tm date1;
	date1.tm_year = 1;
	date1.tm_mon = 1;
	date1.tm_mday = 1;

	std::tm date2;
	date2.tm_year = 1;
	date2.tm_mon = 1;
	date2.tm_mday = 2;

	//make 3 Concerts that collide useing the dates
	concerts.push_back(Concert::Concert(
			"c-1",
			friends,
			7,
			date1
		));
	concerts.push_back(Concert::Concert(
			"c-2",
			friends,
			5,
			date2
		));
	concerts.push_back(Concert::Concert(
			"c-3",
			friends,
			6,
			date2
		));
	//set rand() seed so values are random every
	//time the program runs
	srand(time(NULL));	

	//generate 10 Concerts with random dates and desires
	for(int i = 0; i < 10; i++){

		concerts.push_back(Concert::Concert(
			"c" + std::to_string(i),
			friends,
			rand() % 9 + 1,
			randomDate()
		));
	}		

	//print the unsorted Concerts to the concole
	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i] << std::endl;
	}
	
	//endl for format
	std::cout << std::endl;
	
	//sort Concerts useing std::sort
	std::sort(concerts.begin(), concerts.end());

	//print sorted Concerts to the console
	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i] << std::endl;
	}
}
