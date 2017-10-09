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

	std::default_random_engine gen;
	std::uniform_int_distribution<int> yRange(0, 10);
	std::uniform_int_distribution<int> mRange(0, 11);
	std::uniform_int_distribution<int> dRange(0, 31);
	

	date.tm_year = yRange(gen);
	date.tm_mon = mRange(gen);
	date.tm_mday = dRange(gen);

	return date;
}

int main(){

	std::vector<Concert> concerts;	

	for(int i = 0; i < 10; i++){

		std::vector<std::string> friends;

		std::default_random_engine gen;
		std::uniform_int_distribution<int> dRange(0, 10);

		concerts.push_back(Concert::Concert(
			"c" + std::to_string(i),
			friends,
			dRange(gen),
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
