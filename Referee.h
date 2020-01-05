#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


#ifndef _referee_H
#define _referee_H

// referee class
class referee
 {
	public:
	 	
	referee();

	
	string compare (string player1, string player2);
 	
	
	private :

		char* input1;
		char* input2;
		int Tcount;
		int Wcount;
		int Lcount;


 };
#endif // _referee_H
