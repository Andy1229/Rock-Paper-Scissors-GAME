#include "Tournament.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//Crescendo class
class Crescendo : public Tournament
 {
 public:
 	
 	Crescendo();

 	string Crescendoinput(int x);

 	private:
 		
 		string Cinput;
 	
 };