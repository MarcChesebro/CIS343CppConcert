#include "Concert.h"
#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

std::tm randomDate() {

	std::tm date;	

	date.tm_year = rand() % 10;
	date.tm_mon = rand() % 12;
	date.tm_mday = rand() % 31;

	return date;
}

int main(){

	std::vector<Concert> concerts;	
	
	std::vector<std::string> friends;
	
	std::tm date1;
	date1.tm_year = 1;
	date1.tm_mon = 1;
	date1.tm_mday = 1;

	std::tm date2;
	date2.tm_year = 1;
	date2.tm_mon = 1;
	date2.tm_mday = 2;

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
	srand(time(NULL));	

	for(int i = 0; i < 10; i++){


		concerts.push_back(Concert::Concert(
			"c" + std::to_string(i),
			friends,
			rand() % 9 + 1,
			randomDate()
		));
	}		

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i] << std::endl;
	}
	
	std::cout << std::endl;
	
	std::sort(concerts.begin(), concerts.end());

	for (int i = 0; i < concerts.size(); i++) {

		std::cout << concerts[i] << std::endl;
	}
}
