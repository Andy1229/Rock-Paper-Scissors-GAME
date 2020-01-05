#include "RandomComputer.h"
#include "Tournament.h"

#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


RandomComputer::RandomComputer():Tournament(){}


//RandomComputer input which is randomly selected.
string RandomComputer::RandomComputerinput()
{	


	string s[3] = {"R","P","S"};
	srand ( unsigned ( time(0) ) );
	vector<string> myvector;

	for (int i=0; i<3; ++i) 
	{
		myvector.push_back(s[i]);

	} 
	
	random_shuffle (myvector.begin(), myvector.end());
	
	for (std::vector<string>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    {	
    	Rcinput = Rcinput + *it;
    }

    result = Rcinput[0];

    return result;
}






