#include "Concert.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::tm randomDate() {

	std::tm date;

	date.tm_year = rand() % 11;
	date.tm_mon = rand() % 12;
	date.tm_mday = rand() % 31;

	return date;
}



int main(){

	std::vector<Concert> concerts;	

	for(int i = 0; i < 10; i++){

		std::vector<std::string> friends;

		concerts.push_back(Concert::Concert(
			"c" + std::to_string(i),
			friends,
			rand() % 11 + 1,
			randomDate()
		));

	}		

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i].getDate().tm_year << std::endl;
	}

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i];
	}
}