#include "PaperDoll.h"
#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;



PaperDoll::PaperDoll():Tournament(){}


//returning PaperDoll input which is in the order (Paper, Scissors and Scissors).
string PaperDoll::PaperDollinput(int x)
{		

		if (x == 1)
		 {
		 	Pinput = "P";
		 }
		 else 
		 {
		 	Pinput = "S";
		 }

		 return Pinput;
}





