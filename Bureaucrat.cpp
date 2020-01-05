#include "Bureaucrat.h"
#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;


Bureaucrat::Bureaucrat():Tournament(){}


//returning Bureaucrat input which is Paper only .
string Bureaucrat::Bureaucratinput()
{	
		 Binput="P";

		 return Binput;
}





