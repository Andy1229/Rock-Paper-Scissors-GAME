
# driver is made by linking object files together
all: main.o Referee.o Tournament.o RandomComputer.o Crescendo.o FistfullODollars.o PaperDoll.o Bureaucrat.o Toolbox.o Avalanche.o
	g++ main.o Referee.o Tournament.o RandomComputer.o Crescendo.o FistfullODollars.o PaperDoll.o Bureaucrat.o Toolbox.o Avalanche.o -o main

# make separated class files to *.o

Referee.o: Referee.cpp Referee.h
	g++ -c Referee.cpp -o Referee.o

Tournament.o: Tournament.cpp Tournament.h
	g++ -c Tournament.cpp -o Tournament.o

RandomComputer.o: RandomComputer.cpp RandomComputer.h
	g++ -c RandomComputer.cpp -o RandomComputer.o

Crescendo.o : Crescendo.cpp Crescendo.h
	g++ -c Crescendo.cpp -o Crescendo.o

FistfullODollars.o : FistfullODollars.cpp FistfullODollars.h
	g++ -c FistfullODollars.cpp -o FistfullODollars.o

PaperDoll.o : PaperDoll.cpp PaperDoll.h
	g++ -c PaperDoll.cpp -o PaperDoll.o

Bureaucrat.o : Bureaucrat.cpp Bureaucrat.h
	g++ -c Bureaucrat.cpp -o Bureaucrat.o

Toolbox.o : Toolbox.cpp Toolbox.h
	g++ -c Toolbox.cpp -o Toolbox.o

Avalanche.o : Avalanche.cpp Avalanche.h
	g++ -c Avalanche.cpp -o Avalanche.o

# make driver (main) file to *.o with class files
main.o: main.cpp Referee.h Tournament.h RandomComputer.h  Crescendo.h FistfullODollars.h PaperDoll.h Bureaucrat.h Toolbox.h Avalanche.h
	g++ -c main.cpp -o main.o

# clean removes all object files and the compiled executable
clean:
	rm -f *.o driver
