#include "Toolbox.h"
#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;



Toolbox::Toolbox():Tournament(){}


//returning Toolbox input which is Scissors only.
string Toolbox::Toolboxinput()
{	
		 Tinput="S";

		 return Tinput;
}





