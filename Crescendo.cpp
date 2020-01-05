#include "Crescendo.h"
#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

Crescendo::Crescendo():Tournament(){}


//returning Crescendo input which is in the order (Paper, Scissors and Rock).
string Crescendo::Crescendoinput(int x)
{		

		if (x == 1)
		 {
		 	Cinput = "P";
		 }
		 else if (x == 2 )
		 {
		 	Cinput = "S";
		 }
		 else 
		 {
		 	Cinput = "R";
		 }

		 return Cinput;
}





