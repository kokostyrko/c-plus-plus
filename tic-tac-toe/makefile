APP=tic-tac-toe

BINDIR=bin

SRCDIR=source

OBJDIR=obj

all: $(BINDIR)/$(APP)

$(BINDIR)/$(APP): $(OBJDIR)/board.o $(OBJDIR)/logic.o $(OBJDIR)/move.o $(OBJDIR)/player.o $(OBJDIR)/main.o
	g++ $(OBJDIR)/board.o $(OBJDIR)/logic.o $(OBJDIR)/move.o $(OBJDIR)/player.o $(OBJDIR)/main.o -o $(BINDIR)/$(APP)

$(OBJDIR)/board.o: $(SRCDIR)/board.cpp
	g++ $(SRCDIR)/board.cpp -o $(OBJDIR)/board.o -c -std=c++20

$(OBJDIR)/logic.o: $(SRCDIR)/logic.cpp
	g++ $(SRCDIR)/logic.cpp -o $(OBJDIR)/logic.o -c -std=c++20

$(OBJDIR)/move.o: $(SRCDIR)/move.cpp
	g++ $(SRCDIR)/move.cpp -o $(OBJDIR)/move.o -c -std=c++20

$(OBJDIR)/player.o: $(SRCDIR)/player.cpp
	g++ $(SRCDIR)/player.cpp -o $(OBJDIR)/player.o -c -std=c++20

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp
	g++ $(SRCDIR)/main.cpp -o $(OBJDIR)/main.o -c -std=c++20

clean:
	rm -f *.o *.exe