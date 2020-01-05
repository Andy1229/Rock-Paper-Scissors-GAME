#include "Tournament.h"


#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <stdio.h>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;



Tournament::Tournament(){}
		

	//setup tournament  
	string Tournament::setupTournament()
	{	

		getline(cin, results);


    	return results;
	}
