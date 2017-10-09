#include "Concert.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){

	std::vector<std::string> concerts;	

	for(int i = 0; i < 10; i++){

		std::vector<std::string> friends;

		concerts.push_back(Concert::Concert(
			"c" + i,
			friends,
			rand() % 11 + 1,
			randomDate()
		));
	}			
}

std::tm randomDate(){
	
	std::tm date;

	date.tm_year = rand() % 11;
	date.tm_mon = rand() % 12;
	date.tm_mday = rand() % 31;

	return date;
}
