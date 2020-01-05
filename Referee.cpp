#include "Referee.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;



referee::referee(){}
	

	//compare two players' input  
	string referee::compare (string playerinput1, string playerinput2)
	{	
		input1 = &playerinput1.at(0);
		input2 = &playerinput2.at(0);

		Tcount = 0;
		Wcount = 0;
		Lcount = 0;


		for (int i = 0 ; i < 5 ; ++i)
		{
			if (*(input1+i) == *(input2+i))
			{
				Tcount = Tcount + 1;
			}	
			else if (*(input1+i) == 'R' && *(input2+i) == 'S')
			{
				Wcount = Wcount + 1;
			}
			else if (*(input1+i) == 'S' && *(input2+i) == 'P')
			{
				Wcount = Wcount + 1;
			}
			else if (*(input1+i) == 'P' && *(input2+i) == 'R')
			{
				Wcount = Wcount + 1;
			}
			else 
			{
				Lcount = Lcount + 1;
			}

		}	

		if (Wcount >= Lcount)
		{
			return input1;
		}
		else
		{
			return input2;
		}
	}
