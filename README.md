Rock, Paper, Scissors game was one of my assignments, and it was done in the first semester of the second year,

1. Problem

    In this practical, you are going to improve your Rock Paper Scissors (RPS) program, allowing for greater flexibility. The rules are the same as before: two players compete by choosing Rock, Paper or Scissors and the winner of the game is determined by comparing the choices of the players. Rock beats Scissors, Scissors beats Paper, Paper beats Rock.
    This practical builds upon the previous practical. As such, we assume that in your implementation, there exist files named Human.cpp, Computer.cpp and Referee.cpp.

    You are asked to modify these classes with the names provided in the following individual stages.
        • New computer players: Create the following computer players making use of inher- itance. Use your computer player class for Practical 2 as the base class. (Note: the derived Avalanche class may be identical to your base class.)
        RandomComputer.cpp: RandomComputer returns a random move. Avalanche.cpp: Avalanche always chooses Rock.
        Bureaucrat.cpp: Bureaucrat always chooses Paper.
        Toolbox.cpp: Toolbox always chooses Scissors.
        Crescendo.cpp: Crescendo moves in the following order: Paper, Scissors, Rock. PaperDoll.cpp: Paper doll moves in the following order: Paper, Scissors, Scissors.
        FistfullODollars.cpp: FistfullODollars moves in the following order: Rock, Paper, Paper.
        • New referee: Previously, referee only matches one human player against one com- puter player. Here, your referee class should be able to match any two players together. (Hint: If you think in advance in Practical 2 and implement a common base class for all players, you may save some efforts in this practical)
        • Tournament: Create a class called Tournament. In Tournament.cpp there should be a driver function that sets eight players against each other. The bracket follows the illustration as follows

    In every round, the winner is determined after five plays (draws count as plays). That is, in every round, two players play against each other five times. The one who wins more advances. If both win the same number of plays, then the player with a lower index advances. (e.g. if Player2 and Player4 reach a tie after 5 plays, then Player2 advances.) Also, players ”refresh their memories” between rounds. That is, whenever Crescendo enters a round, it plays paper first.

    Your main.cpp file should have access to all your classes. The input consists of one line: a list of computer player names (from the above list, excluding RandomCom- puter), divided by space, where the i-th name represents Playeri in the bracket. 

2. Description

    referee: 
        - compare two players' input in each time, depending on the order, and find out who is a winner in RPSgame. So this time, after 7 time, we can know the final winner.
        - Compare (string, string) - compare two input and return a winner.

    Tournament:
        - Set up 8 players' order of tournament.
        - setupTournament() - return the order of tournament.

    Randomcomputer
        - The computerinput is randomly saved by vector. If I set it up without vector, the input is selected in order, which means that with vector, the input is more random.
        - RandomComputerinput () - using vector and shuffle function, return the randominput for computer.

    Crescendo
        - The crescendo is saved in order ( Paper, Scissors and Rock). Each time with integer from the main, the input is saved.
        - Crescendoinput(int)- depending on integer, the right input is returned.

    FirstfullODollars
        - The FirstfullODollars is saved in order ( Rock, Paper and Paper). Each time with integer from the main, the input is saved.
        - FistfullODollarsinput(int)- depending on integer, the right input is returned.

    PaperDoll
        - The PaperDoll is saved in order ( Paper, Scissors and Scissors). Each time with integer from the main, the input is saved.
        - PaperDollinput(int) - depending on integer, the right input is returned.

    Bureaucrat
        - Each time Paper is returned for Bureaucrat.
        - Bureaucratinput() - returning Paper only.

    Toolbox
        - Each time Paper is returned for Toolbox. 
        - Toolboxinput() - returning Scissors only.

    Avalanche
        - Each time Paper is returned for Avalanche. 
        - Avalancheinput() - returning Rock only

    main
        - In the main function, the RPSgame starts with calling Tournament. Once the tournament is set up in Tournament class, the order is saved in player array, and also the input of each player is saved in playerinput array. Finally, the main function calls referee class to compare two players for finding out a winner.

3. Running

    makefile compiles all files provided, so just need to tpye "make" in the terminal. 

    Sample input:  Avalanche Bureaucrat Bureaucrat Toolbox Toolbox Crescendo Crescendo FistfullODollars
    Sample output: Toolbox (The output is the name of the grand winner)

