#include "FistfullODollars.h"
#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;


FistfullODollars::FistfullODollars():Tournament(){}


//returning FistfullODollars input which is in the order (Rock, Paper and Paper)..
string FistfullODollars::FistfullODollarsinput(int x)
{		

		if (x == 1)
		 {
		 	Finput = "R";
		 }
		 else 
		 {
		 	Finput = "P";
		 }
		 
		 return Finput;
}





