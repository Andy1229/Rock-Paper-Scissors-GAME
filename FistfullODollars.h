#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;



//FistfullODollars class
class FistfullODollars : public Tournament
 {
 public:
 	
 	FistfullODollars();

 	string FistfullODollarsinput(int x);

 	private:
 		
 		string Finput;
 	
 };
