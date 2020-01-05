#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//Toolbox class
class Toolbox : public Tournament
 {
 public:
 	
 	Toolbox();

 	string Toolboxinput();

 	private:
 		
 		string Tinput;
 	
 };
