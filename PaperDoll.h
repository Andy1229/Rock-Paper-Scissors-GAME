#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;


//PaperDoll class
class PaperDoll : public Tournament
 {
 public:
 	
 	PaperDoll();

 	string PaperDollinput(int x);

 	private:
 		
 		string Pinput;
 	
 };

