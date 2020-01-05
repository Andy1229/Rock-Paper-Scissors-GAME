

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

#ifndef _Tournament_H
#define _Tournament_H


//Tournament class
class Tournament
 {
	public:
	 	
	Tournament();

	
	string setupTournament ();
 	
 	
	private :
        
        string results;
		

 };

#endif // _Tournament_H
