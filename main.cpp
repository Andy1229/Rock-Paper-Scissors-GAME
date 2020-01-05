#include "Referee.h"
#include "Tournament.h"

#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"


#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

//rock, paper, and scissors game start
void RPSgame()
{
	//order is for ordering Tournament
	string order;

	//Array is for saving each input
	string player[8];
	string playerinput[8];


	//calling classes
	RandomComputer RC;
	Crescendo C;
	FistfullODollars F;
	PaperDoll P;
	Bureaucrat B;
	Toolbox T;
	Avalanche A;

	referee R;
	Tournament Tournament;


	//for camparing two players' input
	string P1;
	string P2;


	//set up Tournament in tournament class
	order = Tournament.setupTournament();




	//k is for divide input with space. 
	int k = 0;

	//saving the order of Tournament in each array
	for (int i = 0 ; i < order.size() ; ++i)
	{	
		if (order[i] == ' ')
		{
			k = k + 1;
		}
		else 
		{
			player[k] = player[k] + order[i];
		}
	}

	// for 3 output which have 3 different output as Crescendo, FirstfullODoll and PaperDoll
	int numb = 1; 

	//the first loop for saving input five times
	for (int x = 0 ; x < 5; ++x)
	{	
		//the second loop for finding the order of Tournament
		for (int i = 0 ; i < 8 ; ++i )
		{

			if (player[i] == "RandomComputer")
			{
				playerinput[i] = playerinput[i] + RC.RandomComputerinput();
			}
			else if (player[i] == "Crescendo")
			{
				playerinput[i] = playerinput[i] + C.Crescendoinput(numb);
			}
			else if ( player[i] == "FistfullODollars")
			{
				playerinput[i] = playerinput[i] +  F.FistfullODollarsinput(numb);
			}
			else if ( player[i] == "PaperDoll")
			{
				playerinput[i] = playerinput[i] +  P.PaperDollinput(numb);
			}
			else if ( player[i] == "Bureaucrat")
			{
				playerinput[i] = playerinput[i] + B.Bureaucratinput();
			}
			else if ( player[i] == "Toolbox")
			{
				playerinput[i] = playerinput[i] + T.Toolboxinput();
			}
			else if (player[i] == "Avalanche")
			{
				playerinput[i] = playerinput[i] + A.Avalancheinput();
			}
			
			numb= numb+1;
			
			if (numb == 4)
			{
				numb = 1;
			}
		}
	}


	// this y is for calling lower array to save a winner's input
	int y = 0;
	// compete two players' input
	// after comparing two players, winners' input saves in lower player array 
	// so that after compare each time, the winners' input saves in lower array 
	for (int j = 7 ; j > 0 ; j = j - 3)
	{
		y = 0 ;
		for (int z = 0 ; z < j ; z = z + 2)
		{	
			P1 = playerinput[z];
			P2 = playerinput[z+1];

			playerinput[y] = R.compare(P1, P2);

			if ( P1  == playerinput[y])
			{

				player[y] = player[z];
			}
			else if ( P2 == playerinput[y])
			{
				player[y] = player[z+1];
			}

			y=y+1;
		}
	}


	//find out who is a grand final winner of this game
	cout << player[0] << endl;


}


int main()
{
    
    RPSgame();

    return 0;
}