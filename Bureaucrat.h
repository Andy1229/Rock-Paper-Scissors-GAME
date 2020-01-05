#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//Bureaucrat class
class Bureaucrat : public Tournament
 {
 public:
 	
 	Bureaucrat();

 	string Bureaucratinput();

 	private:
 		
 		string Binput;
 	
 };