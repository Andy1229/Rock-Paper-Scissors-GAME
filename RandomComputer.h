#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//RandomComputer class
class RandomComputer : public Tournament
 {
 public:
 	
 	RandomComputer();

 	string RandomComputerinput();

 	private:
 		
 		string Rcinput;
 		string result;
 	
 };