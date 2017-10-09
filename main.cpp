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
	std::cout << "r: " << date.tm_year << std::endl;	

	return date;
}

int main(){

	std::vector<Concert> concerts;	

	for(int i = 0; i < 10; i++){

		std::vector<std::string> friends;
		std::tm date = randomDate();
			
		std::cout << "a: " << date.tm_year << std::endl;	
		
		concerts.push_back(Concert::Concert(
			"c" + std::to_string(i),
			friends,
			rand() % 10 + 1,
			date
		));
		

	}		

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i].getDate().tm_year << std::endl;
	}

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i] << std::endl;
	}
}
