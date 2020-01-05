#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//Avalanche class
class Avalanche : public Tournament
 {
 public:
 	
 	Avalanche();

 	string Avalancheinput();

 	private:
 		
 		string Ainput;
 	
 };