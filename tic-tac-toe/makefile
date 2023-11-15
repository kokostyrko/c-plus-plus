APP=tic-tac-toe

BINDIR=bin

all: $(BINDIR)/$(APP)

$(BINDIR)/$(APP): board.o logic.o move.o player.o main.o
	g++ board.o logic.o move.o player.o main.o -o $(BINDIR)/$(APP)

board.o: board.cpp
	g++ board.cpp -o board.o -c -std=c++20

logic.o: logic.cpp
	g++ logic.cpp -o logic.o -c -std=c++20

move.o: move.cpp
	g++ move.cpp -o move.o -c -std=c++20

player.o: player.cpp
	g++ player.cpp -o player.o -c -std=c++20

main.o: main.cpp
	g++ main.cpp -o main.o -c -std=c++20